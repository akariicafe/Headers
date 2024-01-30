@interface BMDKEventCodec : NSObject

@property (nonatomic) BOOL decodeMetadata;

+ (id)codecWithVersion:(unsigned int)a0;

- (id)decodeWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto:(id)a0;
- (id)decodeWithProtoData:(id)a0;
- (id)encodeAsProtoData:(id)a0;

@end
