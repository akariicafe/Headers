@class UIMenu, NSArray, UIAction, UIResponder, UIViewController;
@protocol NSCopying;

@interface _UIFulfilledContextMenuConfiguration : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;
@property (retain, nonatomic) id internalIdentifier;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (retain, nonatomic) NSArray *accessoryViews;
@property (copy, nonatomic) UIMenu *menu;
@property (copy, nonatomic) UIAction *previewAction;
@property (readonly, nonatomic) BOOL isMultiItemMenu;
@property (nonatomic) unsigned long long representedItemCount;
@property (nonatomic) unsigned long long badgeCount;
@property (weak, nonatomic) UIResponder *firstResponderTarget;

- (void).cxx_destruct;
- (BOOL)isPresentable;

@end
