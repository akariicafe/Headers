@class NSString;

@interface NSLocaleRegion : NSObject

@property (copy) NSString *twoCharacterCode;
@property (copy) NSString *threeCharacterCode;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)initWithRegionIdentifier:(id)a0;

@end
