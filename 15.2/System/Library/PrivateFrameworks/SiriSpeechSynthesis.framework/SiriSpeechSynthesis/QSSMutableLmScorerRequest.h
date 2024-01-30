@class NSString;

@interface QSSMutableLmScorerRequest : QSSLmScorerRequest

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *task_name;
@property (copy, nonatomic) NSString *transcript;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
