@class NSMutableArray;

@interface _MRSupportedCommandsProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_supportedCommands;
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
