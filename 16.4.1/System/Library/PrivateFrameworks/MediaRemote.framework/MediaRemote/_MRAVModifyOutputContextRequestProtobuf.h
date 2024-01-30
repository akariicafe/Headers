@class NSMutableArray;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char outputContextType : 1; } _has;
}

@property (nonatomic) BOOL hasOutputContextType;
@property (nonatomic) int outputContextType;
@property (retain, nonatomic) NSMutableArray *addingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *removingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *settingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *clusterAwareAddingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *clusterAwareRemovingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *clusterAwareSettingOutputDeviceUIDs;

+ (Class)addingOutputDeviceUIDType;
+ (Class)clusterAwareAddingOutputDeviceUIDType;
+ (Class)clusterAwareRemovingOutputDeviceUIDType;
+ (Class)clusterAwareSettingOutputDeviceUIDType;
+ (Class)removingOutputDeviceUIDType;
+ (Class)settingOutputDeviceUIDType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsOutputContextType:(id)a0;
- (id)removingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (void)addAddingOutputDeviceUID:(id)a0;
- (void)addClusterAwareAddingOutputDeviceUID:(id)a0;
- (void)addClusterAwareRemovingOutputDeviceUID:(id)a0;
- (void)addClusterAwareSettingOutputDeviceUID:(id)a0;
- (void)addRemovingOutputDeviceUID:(id)a0;
- (void)addSettingOutputDeviceUID:(id)a0;
- (id)addingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (unsigned long long)addingOutputDeviceUIDsCount;
- (void)clearAddingOutputDeviceUIDs;
- (void)clearClusterAwareAddingOutputDeviceUIDs;
- (void)clearClusterAwareRemovingOutputDeviceUIDs;
- (void)clearClusterAwareSettingOutputDeviceUIDs;
- (void)clearRemovingOutputDeviceUIDs;
- (void)clearSettingOutputDeviceUIDs;
- (id)clusterAwareAddingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (unsigned long long)clusterAwareAddingOutputDeviceUIDsCount;
- (id)clusterAwareRemovingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (unsigned long long)clusterAwareRemovingOutputDeviceUIDsCount;
- (id)clusterAwareSettingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (unsigned long long)clusterAwareSettingOutputDeviceUIDsCount;
- (id)outputContextTypeAsString:(int)a0;
- (unsigned long long)removingOutputDeviceUIDsCount;
- (id)settingOutputDeviceUIDAtIndex:(unsigned long long)a0;
- (unsigned long long)settingOutputDeviceUIDsCount;

@end
