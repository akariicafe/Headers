@class NSArray, NSString;
@protocol MUPlaceTilesListViewDelegate;

@interface MUPlaceTilesListView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate>

@property (retain, nonatomic) NSArray *viewModels;
@property (weak, nonatomic) id<MUPlaceTilesListViewDelegate> listFeedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
