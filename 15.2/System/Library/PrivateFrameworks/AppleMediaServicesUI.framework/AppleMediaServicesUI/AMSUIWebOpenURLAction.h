@class NSURL, NSString;

@interface AMSUIWebOpenURLAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_openUniversalLink:(id)a0;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
