@class NSMutableDictionary;

@interface NTKInfinityListingAttributes : NSObject

@property (retain, nonatomic) NSMutableDictionary *attributes;

+ (id)attributesWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)colorForKey:(id)a0;
- (void)addAttribute:(id)a0 forKey:(id)a1;
- (BOOL)containsAttributes:(id)a0 ignoreKeys:(id)a1;

@end
