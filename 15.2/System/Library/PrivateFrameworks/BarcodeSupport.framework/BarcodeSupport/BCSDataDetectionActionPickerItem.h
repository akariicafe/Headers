@class NSString, DDAction, CNContact;

@interface BCSDataDetectionActionPickerItem : BCSActionPickerItem <DDDetectionControllerInteractionDelegate> {
    DDAction *_ddAction;
}

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *icsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)label;
- (id)icon;
- (void).cxx_destruct;
- (id)targetApplicationBundleIdentifier;
- (id)actionURL;
- (void)action:(id)a0 didDismissAlertController:(id)a1;
- (BOOL)isCopyActionItem;
- (void)performActionWithFBOptions:(id)a0;
- (BOOL)shouldDismissAlertWhenActionIsTaken;
- (id)initWithAction:(id)a0 ddAction:(id)a1;

@end
