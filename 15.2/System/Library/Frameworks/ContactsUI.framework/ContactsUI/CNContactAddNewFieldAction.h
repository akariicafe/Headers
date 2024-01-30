@class NSArray;
@protocol CNContactGroupPickerDelegate;

@interface CNContactAddNewFieldAction : CNContactAction

@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (weak, nonatomic) id<CNContactGroupPickerDelegate> groupPickerDelegate;

- (void)performActionWithSender:(id)a0;
- (void).cxx_destruct;

@end
