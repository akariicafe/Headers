@class TSCHCDESelection, NSString;

@interface TSCHCDEArchivedSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSCHCDESelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
