@interface SRHDataCollectionController : NSObject

+ (void)initialize;
+ (void)isMediaEventsCollectionEnabledFor:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isMessagingApp:(id)a0;
+ (void)isMediaEventsStreamAuthorizedWithCompletionHandler:(id /* block */)a0;

@end
