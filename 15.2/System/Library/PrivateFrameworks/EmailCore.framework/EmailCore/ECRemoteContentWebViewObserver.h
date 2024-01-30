@class NSString, ECRemoteContentParser;

@interface ECRemoteContentWebViewObserver : NSObject <ECRemoteContentWebViewObserver>

@property (weak, nonatomic) ECRemoteContentParser *parser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParser:(id)a0;
- (void)baseURL:(id)a0 didRequestRemoteContentURLs:(id)a1;

@end
