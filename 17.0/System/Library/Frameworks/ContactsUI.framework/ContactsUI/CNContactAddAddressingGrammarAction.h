@class NSIndexPath, NSTermOfAddress;

@interface CNContactAddAddressingGrammarAction : CNContactAction <IPPronounPickerViewControllerDelegate>

@property (retain, nonatomic) NSTermOfAddress *selectedAddressingGrammar;
@property (retain, nonatomic) NSIndexPath *indexPath;

+ (id)os_log;

- (void).cxx_destruct;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContact:(id)a1 propertyKey:(id)a2 labeledValue:(id)a3;
- (void)performActionWithSender:(id)a0;
- (void)pronounPickerViewController:(id)a0 didFinishWithTermOfAddress:(id)a1;
- (void)pronounPickerViewControllerDidCancel:(id)a0;

@end
