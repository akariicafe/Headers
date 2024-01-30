@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PhotosAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    NSObject<OS_dispatch_queue> *_unboostingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setPhotoStreamEnabled:(BOOL)a0;
- (void)_setiCPLEnabled:(BOOL)a0;
- (id)libraryBundle;
- (BOOL)_isCloudPhotoAutoEnableForAccount:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_setSharedAlbumEnabled:(BOOL)a0;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
