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

- (void).cxx_destruct;
- (BOOL)isValidValue:(id)a0;
- (id)displayLabel;
- (id)displayValue;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (BOOL)canRemove;
- (id)displayStringForValue:(id)a0;
- (void)geminiDataSourceDidUpdate:(id)a0;
- (void)updateLabeledValueWithValue:(id)a0;

@end
