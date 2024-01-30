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

- (void)performAction;
- (void).cxx_destruct;
- (id)icon;
- (id)targetApplicationBundleIdentifier;
- (BOOL)isCopyActionItem;
- (id)actionURL;
- (id)label;
- (void)action:(id)a0 didDismissAlertController:(id)a1;
- (BOOL)shouldDismissAlertWhenActionIsTaken;
- (id)initWithAction:(id)a0 ddAction:(id)a1;

@end
