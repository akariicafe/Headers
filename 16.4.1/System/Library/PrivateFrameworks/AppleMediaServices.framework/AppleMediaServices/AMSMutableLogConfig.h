@class NSString;

@interface AMSMutableLogConfig : AMSLogConfig <NSCopying>

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;


@end
