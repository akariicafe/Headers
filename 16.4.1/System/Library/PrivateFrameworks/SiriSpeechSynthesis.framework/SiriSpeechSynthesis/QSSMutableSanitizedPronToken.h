@class NSString;

@interface QSSMutableSanitizedPronToken : QSSSanitizedPronToken

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *pron_source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
