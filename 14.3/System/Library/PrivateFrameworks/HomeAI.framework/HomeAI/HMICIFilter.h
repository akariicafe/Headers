@class NSString, NSArray;

@interface HMICIFilter : HMFObject

@property (readonly) NSString *name;
@property (readonly) double probability;
@property (readonly) NSArray *attributes;

- (id)attributeForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)expectedAttributeForKey:(id)a0;
- (id)applyToImage:(id)a0 withProbability:(double)a1;

@end
