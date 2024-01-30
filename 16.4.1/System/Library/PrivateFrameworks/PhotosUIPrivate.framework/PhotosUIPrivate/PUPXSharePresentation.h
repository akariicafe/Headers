@class NSString;

@interface PUPXSharePresentation : NSObject <PXSharePresentation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createActivitySharingControllerWithContext:(id)a0;
- (id)defaultActivityTypeOrder;
- (id)createActivitySharingControllerWithContext:(id)a0 selectedAssetIndexSet:(id)a1;

@end
