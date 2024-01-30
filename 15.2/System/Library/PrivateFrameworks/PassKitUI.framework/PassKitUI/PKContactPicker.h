@class NSString, UIViewController;

@interface PKContactPicker : NSObject <CNContactPickerDelegate>

@property (retain, nonatomic) UIViewController *pickerViewController;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (copy, nonatomic) id /* block */ cancelationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
