@class NSError, MPAVItem;

@interface MPUPlaybackAlertController : UIAlertController

@property (readonly, nonatomic) long long playbackAlertType;
@property (readonly, nonatomic) MPAVItem *item;
@property (readonly, nonatomic) NSError *error;

+ (id)contentRestrictedPlaybackAlertControllerForContentType:(long long)a0 dismissalBlock:(id /* block */)a1;
+ (id)genericAlertControllerForItem:(id)a0 error:(id)a1 dismissalBlock:(id /* block */)a2;
+ (id)playbackAlertControllerForItem:(id)a0 contentType:(long long)a1 error:(id)a2 dismissalBlock:(id /* block */)a3;
+ (long long)playbackAlertTypeForError:(id)a0;
+ (id)userRemovedAlertControllerForItem:(id)a0 dismissalBlock:(id /* block */)a1;

- (void).cxx_destruct;

@end
