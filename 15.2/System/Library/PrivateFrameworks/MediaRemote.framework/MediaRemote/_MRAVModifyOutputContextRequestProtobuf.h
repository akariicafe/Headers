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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
