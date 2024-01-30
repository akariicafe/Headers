@class NSDictionary, NSMutableDictionary;

@interface PETProtobufRawDecodedMessage : PBCodable {
    NSMutableDictionary *_decodedDict;
    NSDictionary *_nestedFields;
}

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithData:(id)a0 nestedFields:(id)a1;
- (void)writeTo:(id)a0;
- (id)dictionaryRepresentation;

@end
