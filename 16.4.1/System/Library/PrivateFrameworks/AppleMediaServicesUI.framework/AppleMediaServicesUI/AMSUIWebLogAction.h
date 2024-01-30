@class NSString, AMSUIWebClientContext;

@interface AMSUIWebLogAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (nonatomic) long long level;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) BOOL sensitive;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned char)_logTypeFromLevel:(long long)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
