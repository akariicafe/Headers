@class NSArray;
@protocol CNContactGroupPickerDelegate;

@interface CNContactAddNewFieldAction : CNContactAction

@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (weak, nonatomic) id<CNContactGroupPickerDelegate> groupPickerDelegate;

- (void).cxx_destruct;
- (void)performActionWithSender:(id)a0;

@end
