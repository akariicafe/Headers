@class NSString, UIImage, NSURL, BCSAction;
@protocol BCSActionPickerItemDelegate;

@interface BCSActionPickerItem : NSObject {
    id /* block */ _actionHandler;
}

@property (retain, nonatomic) UIImage *icon;
@property (weak, nonatomic) id<BCSActionPickerItemDelegate> actionPickerItemDelegate;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, weak, nonatomic) BCSAction *action;
@property (readonly, nonatomic) BOOL shouldDismissAlertWhenActionIsTaken;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSString *targetApplicationBundleIdentifier;
@property (readonly, nonatomic) long long dataType;
@property (readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
@property (readonly, nonatomic, getter=isCopyActionItem) BOOL copyActionItem;
@property (readonly, nonatomic) BOOL useInlineMenu;

+ (id)actionPickerItemWithLabel:(id)a0 actionHandler:(id /* block */)a1;

- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (void)performAction;
- (void)didPerformAction;
- (void)performActionWithFBOptions:(id)a0;
- (id)initWithLabel:(id)a0 actionHandler:(id /* block */)a1;
- (id)initWithLabel:(id)a0 action:(id)a1;

@end
