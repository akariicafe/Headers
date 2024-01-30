@interface SQMediaItemMapper : NSObject

+ (id)queue;
+ (id)slicedAdamIDsFromAdamIDs:(id)a0 sliceSize:(long long)a1;
+ (void)shazamTrackIDsFromAdamIDs:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
