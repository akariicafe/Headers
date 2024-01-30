@class TSKSelection, NSString, TSTAutofillSelection;

@interface TSTArchivedAutofillSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSTAutofillSelection *autofillSelection;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
