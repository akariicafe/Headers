@class NSString, FCCKPLocale, NSData, FCCKPIdentifier;

@interface FCCKPRequestOperationHeader : PBCodable <NSCopying> {
    unsigned long long _applicationConfigVersion;
    unsigned long long _deviceFlowControlBudget;
    unsigned long long _deviceFlowControlBudgetCap;
    unsigned long long _deviceProtocolVersion;
    unsigned long long _globalConfigVersion;
    unsigned long long _operationGroupQuantity;
    NSString *_applicationBundle;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    FCCKPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    NSString *_deviceSoftwareVersion;
    int _isolationLevel;
    FCCKPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    NSString *_operationGroupName;
    int _targetDatabase;
    NSString *_userIDContainerID;
    BOOL _deviceSoftwareIsAppleInternal;
    struct { unsigned char applicationConfigVersion : 1; unsigned char deviceFlowControlBudget : 1; unsigned char deviceFlowControlBudgetCap : 1; unsigned char deviceProtocolVersion : 1; unsigned char globalConfigVersion : 1; unsigned char operationGroupQuantity : 1; unsigned char applicationContainerEnvironment : 1; unsigned char deviceFlowControlRegeneration : 1; unsigned char isolationLevel : 1; unsigned char targetDatabase : 1; unsigned char deviceSoftwareIsAppleInternal : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
