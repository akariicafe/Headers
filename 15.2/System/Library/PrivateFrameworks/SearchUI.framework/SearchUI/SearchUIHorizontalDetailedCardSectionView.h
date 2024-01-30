@class NSString, SearchUIDetailedView, SearchUIDetailedRowModel;

@interface SearchUIHorizontalDetailedCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>

@property (retain, nonatomic) SearchUIDetailedView *contentView;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (BOOL)supportsCustomUserReportRequestAfforance;

@end
