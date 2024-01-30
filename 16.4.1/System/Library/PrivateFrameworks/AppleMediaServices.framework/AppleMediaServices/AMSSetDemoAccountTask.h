@class NSString, AMSProcessInfo;

@interface AMSSetDemoAccountTask : AMSTask

@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *username;

- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 password:(id)a1;
- (id)performTask;

@end
