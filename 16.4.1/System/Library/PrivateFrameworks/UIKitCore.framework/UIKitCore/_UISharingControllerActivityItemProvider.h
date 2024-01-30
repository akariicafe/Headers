@interface _UISharingControllerActivityItemProvider : NSItemProvider

- (id)initWithCKShare:(id)a0 container:(id)a1 allowedSharingOptions:(id)a2;
- (id)initWithCKSharePreparationHandler:(id /* block */)a0 allowedSharingOptions:(id)a1;
- (void)registerCloudKitShareWithPreparationHandler:(id /* block */)a0 allowedSharingOptions:(id)a1;

@end
