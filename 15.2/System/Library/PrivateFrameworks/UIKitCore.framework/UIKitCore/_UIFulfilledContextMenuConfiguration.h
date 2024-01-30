@class UIViewController, UIMenu;
@protocol NSCopying;

@interface _UIFulfilledContextMenuConfiguration : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (copy, nonatomic) UIMenu *menu;

- (BOOL)isPresentable;
- (void).cxx_destruct;

@end
