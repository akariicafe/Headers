@class NSMutableDictionary, ICTable, NSObject, ICTextController;
@protocol ICAvailableTableWidthProviding;

@interface ICTableColumnWidthManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *cachedIdealColumnWidths;
@property (readonly, nonatomic) NSMutableDictionary *cachedActualColumnWidths;
@property (readonly, nonatomic) NSMutableDictionary *cachedMinimumColumnWidths;
@property (readonly, weak, nonatomic) ICTable *table;
@property (readonly, weak, nonatomic) NSObject<ICAvailableTableWidthProviding> *delegate;
@property (readonly, nonatomic) ICTextController *styler;
@property (readonly, nonatomic) double singleColumnTableWidth;

- (void).cxx_destruct;
- (double)comfortableColumnWidth;
- (double)calculateIdealWidthOfColumn:(id)a0;
- (double)comfortableNumberOfColumnsOnscreen;
- (id)recalculateActualWidths;
- (id)initWithTable:(id)a0 delegate:(id)a1;
- (double)widthOfColumn:(id)a0;
- (id)invalidateWidthForColumns:(id)a0;
- (id)invalidateAvailableWidth;

@end
