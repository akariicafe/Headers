@class NSString;

@interface PUXStoryUISwiftFactory : NSObject <PXStoryUISwiftFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithConfiguration:(id)a0 contentViewController:(out id *)a1;
+ (id)thumbnailActionPerformerWithModel:(id)a0;
+ (id)flexMusicViewController;


@end
