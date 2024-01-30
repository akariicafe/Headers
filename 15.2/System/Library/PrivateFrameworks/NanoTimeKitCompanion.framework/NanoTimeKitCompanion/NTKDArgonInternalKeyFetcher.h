@class NSString;

@interface NTKDArgonInternalKeyFetcher : NSObject <NTKArgonFetcherProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchNewRecordsSinceChangeToken:(id)a0 forReason:(long long)a1 completion:(id /* block */)a2;

@end
