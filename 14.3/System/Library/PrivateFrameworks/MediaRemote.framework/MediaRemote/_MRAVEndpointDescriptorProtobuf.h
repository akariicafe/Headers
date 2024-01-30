@class NSString, NSMutableArray, _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char connectionType : 1; unsigned char canModifyGroupMembership : 1; unsigned char isLocalEndpoint : 1; unsigned char isProxyGroupPlayer : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasDesignatedGroupLeader;
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *designatedGroupLeader;
@property (nonatomic) BOOL hasIsLocalEndpoint;
@property (nonatomic) BOOL isLocalEndpoint;
@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) BOOL hasIsProxyGroupPlayer;
@property (nonatomic) BOOL isProxyGroupPlayer;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasCanModifyGroupMembership;
@property (nonatomic) BOOL canModifyGroupMembership;
@property (retain, nonatomic) NSMutableArray *personalOutputDevices;

+ (Class)outputDevicesType;
+ (Class)personalOutputDevicesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addOutputDevices:(id)a0;
- (void)addPersonalOutputDevices:(id)a0;
- (unsigned long long)outputDevicesCount;
- (void)clearOutputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)personalOutputDevicesCount;
- (void)clearPersonalOutputDevices;
- (id)personalOutputDevicesAtIndex:(unsigned long long)a0;
- (id)connectionTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsConnectionType:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
