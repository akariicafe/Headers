@class NSString, NSMutableDictionary, NSURLSession;

@interface NPTCDNDebugCollector : NSObject <NPTMetadataCollection>

@property (retain) NSURLSession *session;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectorName;

- (void)stopCollecting;
- (void)startCollectingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
