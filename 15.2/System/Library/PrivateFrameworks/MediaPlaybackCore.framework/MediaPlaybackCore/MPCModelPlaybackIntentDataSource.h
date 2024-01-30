@class NSString;

@interface MPCModelPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getPlaybackContextForIntent:(id)a0 withCompletion:(id /* block */)a1;

@end
