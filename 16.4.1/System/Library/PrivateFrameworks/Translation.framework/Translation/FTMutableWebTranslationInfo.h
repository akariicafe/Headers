@class NSString, NSArray;

@interface FTMutableWebTranslationInfo : FTWebTranslationInfo

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *spans;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
