@class NSString, NSArray;

@interface FTMutableTokenProns : FTTokenProns

@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSArray *sanitized_sequences;
@property (copy, nonatomic) NSArray *prons;
@property (copy, nonatomic) NSArray *normalized_prons;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
