@class NSString, AMSUIWebClientContext;

@interface AMSUIWebBusinessChatAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *businessID;
@property (retain, nonatomic) NSString *businessGroupID;
@property (retain, nonatomic) NSString *intentID;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)makeBusinessChatDeeplink;
- (id)runAction;

@end
