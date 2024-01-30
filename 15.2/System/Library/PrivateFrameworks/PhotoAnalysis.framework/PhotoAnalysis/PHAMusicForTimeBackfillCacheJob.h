@class NSString;

@interface PHAMusicForTimeBackfillCacheJob : NSObject <PHAMusicJob>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithGraphManager:(id)a0 progressBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldRunForLibrary:(id)a0;

@end
