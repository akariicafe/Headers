@class UICloudSharingController, NSString;

@interface _UISharingControllerActivityItemSource : NSObject <UIActivityItemSource>

@property (retain, nonatomic) UICloudSharingController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;

@end
