@class NSString, AMSUIWebClientContext;

@interface AMSUIWebLogAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) long long level;
@property (retain, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
