@class NSString;

@interface FTMutableTTSReplacement : FTTTSReplacement

@property (copy, nonatomic) NSString *original;
@property (copy, nonatomic) NSString *replacement;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
