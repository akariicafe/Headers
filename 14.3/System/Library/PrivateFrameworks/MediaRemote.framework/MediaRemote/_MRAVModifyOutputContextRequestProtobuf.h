@class NSMutableArray;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_addingOutputDeviceUIDs;
    NSMutableArray *_clusterAwareAddingOutputDeviceUIDs;
    NSMutableArray *_clusterAwareRemovingOutputDeviceUIDs;
    NSMutableArray *_clusterAwareSettingOutputDeviceUIDs;
    int _outputContextType;
    NSMutableArray *_removingOutputDeviceUIDs;
    NSMutableArray *_settingOutputDeviceUIDs;
    struct { unsigned char outputContextType : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
