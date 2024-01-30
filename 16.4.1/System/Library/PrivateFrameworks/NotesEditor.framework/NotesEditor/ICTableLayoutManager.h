@class NSMutableDictionary, ICTableColumnWidthManager, NSRegularExpression, ICTable, NSObject, NSString;
@protocol ICAvailableTableWidthProviding;

@interface ICTableLayoutManager : NSObject <ICAvailableTableWidthProviding>

@property (readonly) NSMutableDictionary *columnLayoutManagers;
@property double emptyCellLineHeight;
@property double emptyCellLineSpacing;
@property (readonly, weak, nonatomic) ICTable *table;
@property (readonly, weak, nonatomic) NSObject<ICAvailableTableWidthProviding> *delegate;
@property (readonly) ICTableColumnWidthManager *columnWidthManager;
@property (readonly, nonatomic) NSMutableDictionary *rowPositions;
@property (readonly, nonatomic) double emptyCellHeight;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;
@property (readonly, nonatomic) double availableWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTable:(id)a0 delegate:(id)a1;
- (id)columnLayoutManagerForColumn:(id)a0;
- (void)removeColumnLayoutManagerForColumn:(id)a0;
- (void)setYPosition:(double)a0 forRow:(id)a1 shouldInvalidate:(BOOL)a2;
- (void)updateForMovedRow:(id)a0;

@end
