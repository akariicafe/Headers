@class NSString, NSURL, NSMutableDictionary;
@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;

@interface USWebpageUsage : NSObject {
    NSMutableDictionary *_contextUsageRecord;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) BOOL usageTrusted;
@property (readonly) id<_CDAsyncLocalContext> context;
@property (readonly) id<_DKKnowledgeSaving> eventStorage;
@property (readonly, copy) NSURL *URL;

+ (id)getProcessIdentifier;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)changeState:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1;
- (id)initWithURL:(id)a0 context:(id)a1 eventStorage:(id)a2 bundleIdentifier:(id)a3 usageTrusted:(BOOL)a4;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2;

@end
