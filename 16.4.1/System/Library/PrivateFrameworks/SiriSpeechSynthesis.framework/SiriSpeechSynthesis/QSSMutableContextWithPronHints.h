@class NSString, NSArray;

@interface QSSMutableContextWithPronHints : QSSContextWithPronHints

@property (copy, nonatomic) NSString *contextual_text;
@property (copy, nonatomic) NSArray *pron_hints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
