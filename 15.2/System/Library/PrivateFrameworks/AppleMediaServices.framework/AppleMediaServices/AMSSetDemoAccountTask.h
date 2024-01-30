@class NSString, AMSProcessInfo;

@interface AMSSetDemoAccountTask : AMSTask

@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *username;

- (id)initWithUsername:(id)a0 password:(id)a1;
- (void).cxx_destruct;
- (id)performTask;

@end
