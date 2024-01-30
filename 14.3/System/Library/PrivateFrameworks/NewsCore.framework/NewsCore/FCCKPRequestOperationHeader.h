@class NSString, FCCKPLocale, NSData, FCCKPIdentifier;

@interface FCCKPRequestOperationHeader : PBCodable <NSCopying> {
    struct { unsigned char applicationConfigVersion : 1; unsigned char deviceFlowControlBudget : 1; unsigned char deviceFlowControlBudgetCap : 1; unsigned char deviceProtocolVersion : 1; unsigned char globalConfigVersion : 1; unsigned char operationGroupQuantity : 1; unsigned char applicationContainerEnvironment : 1; unsigned char deviceFlowControlRegeneration : 1; unsigned char isolationLevel : 1; unsigned char targetDatabase : 1; unsigned char deviceSoftwareIsAppleInternal : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApplicationContainer;
@property (retain, nonatomic) NSString *applicationContainer;
@property (readonly, nonatomic) BOOL hasApplicationBundle;
@property (retain, nonatomic) NSString *applicationBundle;
@property (readonly, nonatomic) BOOL hasApplicationVersion;
@property (retain, nonatomic) NSString *applicationVersion;
@property (nonatomic) BOOL hasApplicationConfigVersion;
@property (nonatomic) unsigned long long applicationConfigVersion;
@property (nonatomic) BOOL hasGlobalConfigVersion;
@property (nonatomic) unsigned long long globalConfigVersion;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (retain, nonatomic) FCCKPIdentifier *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasDeviceSoftwareVersion;
@property (retain, nonatomic) NSString *deviceSoftwareVersion;
@property (readonly, nonatomic) BOOL hasDeviceHardwareVersion;
@property (retain, nonatomic) NSString *deviceHardwareVersion;
@property (readonly, nonatomic) BOOL hasDeviceLibraryName;
@property (retain, nonatomic) NSString *deviceLibraryName;
@property (readonly, nonatomic) BOOL hasDeviceLibraryVersion;
@property (retain, nonatomic) NSString *deviceLibraryVersion;
@property (readonly, nonatomic) BOOL hasDeviceFlowControlKey;
@property (retain, nonatomic) NSString *deviceFlowControlKey;
@property (nonatomic) BOOL hasDeviceFlowControlBudget;
@property (nonatomic) unsigned long long deviceFlowControlBudget;
@property (nonatomic) BOOL hasDeviceFlowControlBudgetCap;
@property (nonatomic) unsigned long long deviceFlowControlBudgetCap;
@property (nonatomic) BOOL hasDeviceFlowControlRegeneration;
@property (nonatomic) float deviceFlowControlRegeneration;
@property (nonatomic) BOOL hasDeviceProtocolVersion;
@property (nonatomic) unsigned long long deviceProtocolVersion;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) FCCKPLocale *locale;
@property (readonly, nonatomic) BOOL hasMmcsProtocolVersion;
@property (retain, nonatomic) NSString *mmcsProtocolVersion;
@property (nonatomic) BOOL hasApplicationContainerEnvironment;
@property (nonatomic) int applicationContainerEnvironment;
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (readonly, nonatomic) BOOL hasDeviceAssignedName;
@property (retain, nonatomic) NSString *deviceAssignedName;
@property (readonly, nonatomic) BOOL hasDeviceHardwareID;
@property (retain, nonatomic) NSString *deviceHardwareID;
@property (nonatomic) BOOL hasTargetDatabase;
@property (nonatomic) int targetDatabase;
@property (readonly, nonatomic) BOOL hasUserIDContainerID;
@property (retain, nonatomic) NSString *userIDContainerID;
@property (nonatomic) BOOL hasIsolationLevel;
@property (nonatomic) int isolationLevel;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) BOOL hasOperationGroupQuantity;
@property (nonatomic) unsigned long long operationGroupQuantity;
@property (nonatomic) BOOL hasDeviceSoftwareIsAppleInternal;
@property (nonatomic) BOOL deviceSoftwareIsAppleInternal;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
