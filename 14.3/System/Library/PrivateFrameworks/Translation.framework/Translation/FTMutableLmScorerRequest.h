@class NSString;

@interface FTMutableLmScorerRequest : FTLmScorerRequest

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *task_name;
@property (copy, nonatomic) NSString *transcript;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
