@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying> {
    NSString *_routingContextUID;
    BOOL _multipleBuiltInDevices;
    struct { unsigned char multipleBuiltInDevices : 1; } _has;
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
