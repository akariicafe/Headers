@class NSString, CNGeminiResult, CNMutableContact;
@protocol CNUIGeminiDataSourceDelegate;

@interface CNPropertyGroupGeminiItem : CNPropertyGroupItem <CNUIGeminiDataSourceDelegate>

@property (retain, nonatomic) CNMutableContact *editingContact;
@property (retain, nonatomic) CNGeminiResult *geminiResult;
@property (weak, nonatomic) id<CNUIGeminiDataSourceDelegate> geminiUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValidValue:(id)a0;
- (BOOL)canRemove;
- (void)geminiDataSourceDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)displayStringForValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (id)displayLabel;
- (void)updateLabeledValueWithValue:(id)a0;
- (id)displayValue;

@end
