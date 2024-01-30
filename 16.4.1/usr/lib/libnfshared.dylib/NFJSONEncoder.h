@interface NFJSONEncoder : NSObject

+ (id)encoder;

- (id)stringFromArray:(id)a0;
- (id)stringFromDictionary:(id)a0;
- (id)_JSONCompatibleArray:(id)a0;
- (id)_JSONCompatibleDictionary:(id)a0;

@end
