@interface SHSheetFactory : NSObject

+ (id)createMainPresenterWithContext:(id)a0;
+ (id)_createPlatformViewControllerWithSession:(id)a0;
+ (id)createAirdropViewControllerWithNoContentView:(BOOL)a0 delegate:(id)a1;
+ (id)createCollaborationOptionsViewControllerWithOptions:(id)a0 updateHandler:(id /* block */)a1;
+ (id)createCollaborationParticipantsViewControllerWithContext:(id)a0 request:(id)a1 delegate:(id)a2;
+ (id)createContentViewControllerWithSession:(id)a0 presenter:(id)a1;
+ (id)createOptionsViewControllerWithContext:(id)a0 delegate:(id)a1;
+ (id)createUserDefaultsViewControllerWithContext:(id)a0 delegate:(id)a1;

@end
