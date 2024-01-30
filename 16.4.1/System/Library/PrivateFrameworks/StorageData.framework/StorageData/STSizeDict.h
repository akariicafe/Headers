@class NSDictionary, STSizeVector;

@interface STSizeDict : NSObject

@property (readonly) NSDictionary *dictionary;
@property (readonly) STSizeVector *total;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)get:(id)a0;
- (id)plus:(id)a0;
- (void).cxx_destruct;
- (id)remapKeys:(id)a0 removeMissing:(BOOL)a1;

@end
