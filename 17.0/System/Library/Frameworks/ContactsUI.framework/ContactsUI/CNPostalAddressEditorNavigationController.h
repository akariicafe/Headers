@protocol CNPostalAddressEditorDelegate;

@interface CNPostalAddressEditorNavigationController : UINavigationController

@property (weak, nonatomic) id<CNPostalAddressEditorDelegate> addressEditorDelegate;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)doneWithContact:(id)a0 propertyKey:(id)a1;
- (id)initWithContact:(id)a0 propertyKey:(id)a1 editNames:(BOOL)a2;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 addressDictionary:(id)a2 label:(id)a3;
- (id)initWithPropertyKey:(id)a0 label:(id)a1;

@end
