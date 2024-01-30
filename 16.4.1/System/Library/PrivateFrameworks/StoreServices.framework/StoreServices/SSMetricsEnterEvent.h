@class NSString;

@interface SSMetricsEnterEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *enterType;
@property (retain, nonatomic) NSString *referringAppName;
@property (retain, nonatomic) NSString *referringURL;

- (id)init;
- (id)description;
- (void)setEnterTypeWithLaunchReason:(long long)a0;

@end
