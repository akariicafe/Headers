@class NSArray, NSString, AMSUIWebClientContext;

@interface AMSUIWebMediaAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSArray *bundleIdentifiers;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSArray *includedResultKeys;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
