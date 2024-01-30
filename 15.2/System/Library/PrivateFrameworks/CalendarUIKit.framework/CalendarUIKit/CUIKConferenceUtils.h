@interface CUIKConferenceUtils : NSObject

+ (id)_workQueue;
+ (id)logHandle;
+ (id)_systemImageNamed:(id)a0;
+ (id)subtitleForVirtualConference:(id)a0 displayedWithTitle:(id)a1;
+ (void)displayDetailsForJoinMethod:(id)a0 completionHandler:(id /* block */)a1;
+ (id)subtitleForURL:(id)a0 displayedWithTitle:(id)a1;
+ (void)displayDetailsForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)imageForRoomType:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_platformImageForISIcon:(id)a0;
+ (id)_titleForApplicationRecord:(id)a0 URL:(id)a1;
+ (id)_prepareImageForDefaultDescriptor:(id)a0;
+ (id)_imageForApplicationRecord:(id)a0 URL:(id)a1 isBroadcast:(BOOL)a2;
+ (unsigned long long)_buttonTypeForApplicationRecord:(id)a0 URL:(id)a1 isBroadcast:(BOOL)a2;
+ (void)_displayDetailsForURL:(id)a0 isBroadcast:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)synchronousTitleForURL:(id)a0;
+ (id)synchronousOutlineIconForURL:(id)a0 outImageName:(id *)a1;

@end
