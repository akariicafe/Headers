@class NSArray, NSString;

@interface AMSUIWebMediaAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSArray *bundleIdentifiers;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSArray *includedResultKeys;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *urlString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)_runMediaRequestWithURL:(id)a0 clientIdentifier:(id)a1 clientVersion:(id)a2;
- (id)_runMediaRequestWithType:(long long)a0 clientIdentifier:(id)a1 clientVersion:(id)a2;

@end
