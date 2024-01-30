@class NSString, UITextField, UIView;
@protocol EKLocationVirtualConferenceSearchFieldsDelegate;

@interface EKLocationVirtualConferenceSearchFieldsView : UIView <UITextFieldDelegate> {
    UIView *_hairline;
}

@property (readonly, nonatomic) UITextField *locationTextField;
@property (readonly, nonatomic) UITextField *virtualConferenceTextField;
@property (retain, nonatomic) UITextField *selectedTextField;
@property (nonatomic) BOOL disableConferenceTextField;
@property (weak, nonatomic) id<EKLocationVirtualConferenceSearchFieldsDelegate> delegate;
@property (readonly, nonatomic) double preferredHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)a0;
- (id)_newTextFieldWithLeftViewText:(id)a0 imageName:(id)a1;
- (id)conferenceLabelImageName;
- (id)conferenceLabelText;
- (id)locationLabelImageName;
- (id)locationLabelText;
- (void)updateLeftViewForTextField:(id)a0 withText:(id)a1 imageName:(id)a2;

@end
