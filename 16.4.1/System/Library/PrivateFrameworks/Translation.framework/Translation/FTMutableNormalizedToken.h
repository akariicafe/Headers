@class NSString, NSArray;

@interface FTMutableNormalizedToken : FTNormalizedToken

@property (copy, nonatomic) NSString *original_token;
@property (copy, nonatomic) NSArray *nbest_variants;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
