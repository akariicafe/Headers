@class NSString, INJSONEncoderConfiguration;

@interface INJSONEncoder : NSObject <NSCopying>

@property (readonly, nonatomic) INJSONEncoderConfiguration *_storedConfiguration;
@property (readonly, copy, nonatomic) INJSONEncoderConfiguration *configuration;
@property (copy, nonatomic) NSString *languageCode;

- (id)_encodeObject:(id)a0 codableAttribute:(id)a1;
- (id)encodeObject:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeObject:(id)a0 withCodableDescription:(id)a1;
- (id)encodeObject:(id)a0 withCodableAttribute:(id)a1;

@end
