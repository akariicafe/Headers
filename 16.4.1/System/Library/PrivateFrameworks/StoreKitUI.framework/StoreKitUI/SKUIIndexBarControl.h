@class NSArray, NSDictionary, SKUIIndexBarEntry, NSMapTable, NSIndexPath;
@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate;

@interface SKUIIndexBarControl : UIControl {
    SKUIIndexBarEntry *_combinedEntry;
    BOOL _didSendPastBottom;
    BOOL _didSendPastTop;
    NSArray *_displayEntries;
    BOOL _hasValidCombinedEntry;
    BOOL _hasValidDisplayEntries;
    BOOL _hasValidNumberOfSections;
    BOOL _hasValidTotalEntryCount;
    BOOL _hasValidTotalSize;
    NSMapTable *_indexPathToEntryMapTable;
    NSIndexPath *_lastSelectedIndexPath;
    double _lineSpacing;
    long long _numberOfSections;
    NSMapTable *_sectionIndexToNumberOfEntriesMapTable;
    long long _totalEntryCount;
    struct CGSize { double width; double height; } _totalSize;
    struct { unsigned char dataSourceRespondsToCombinedEntry : 1; unsigned char dataSourceRespondsToNumberOfSections : 1; unsigned char delegateRespondsToDidSelectEntryAtIndexPath : 1; unsigned char delegateRespondsToDidSelectBeyondBottom : 1; unsigned char delegateRespondsToDidSelectBeyondTop : 1; } _dataSourceDelegateFlags;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (weak, nonatomic) id<SKUIIndexBarControlDataSource> dataSource;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes;
@property (weak, nonatomic) id<SKUIIndexBarControlDelegate> delegate;
@property (readonly, nonatomic) long long numberOfSections;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_totalSize;
- (id)_displayEntries;
- (void)reloadSections:(id)a0;
- (id)_allEntries;
- (long long)_numberOfSections;
- (id)_allRequiredEntries;
- (id)_combinedEntry;
- (void)_configureNewEntry:(id)a0;
- (id)_displayEntriesThatFitInViewForGroupedEntries;
- (id)_entryAtIndexPath:(id)a0;
- (void)_enumerateEntryIndexPathsUsingBlock:(id /* block */)a0;
- (void)_invalidateDisplayEntries;
- (void)_invalidateForChangedLayoutProperties;
- (long long)_numberOfEntriesInSection:(long long)a0;
- (BOOL)_reloadLineSpacing;
- (void)_sendSelectionForTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })_sizeForEntries:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeForEntryAtIndexPath:(id)a0;
- (long long)_totalEntryCount;
- (long long)numberOfEntriesInSection:(long long)a0;
- (void)reloadCombinedEntry;
- (void)reloadEntryAtIndexPath:(id)a0;

@end
