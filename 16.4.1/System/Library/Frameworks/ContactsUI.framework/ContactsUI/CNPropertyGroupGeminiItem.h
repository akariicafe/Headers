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

- (id)displayLabel;
- (BOOL)isValidValue:(id)a0;
- (void).cxx_destruct;
- (id)displayValue;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (BOOL)canRemove;
- (id)displayStringForValue:(id)a0;
- (void)geminiDataSourceDidUpdate:(id)a0;
- (void)updateLabeledValueWithValue:(id)a0;

@end
