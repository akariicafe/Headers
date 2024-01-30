@class NSString;

@interface FTMutableTTSReplacement : FTTTSReplacement

@property (copy, nonatomic) NSString *original;
@property (copy, nonatomic) NSString *replacement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
