@class NUIContainerBoxView, NSString, SFFlightCardSection, FUFlightViewController;

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate, NUIContainerViewDelegate>

@property (retain, nonatomic) SFFlightCardSection *section;
@property (retain, nonatomic) FUFlightViewController *flightViewController;
@property (nonatomic) unsigned long long lastSelectedLegIndex;
@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)defaultSeparatorStyleForCardSection:(id)a0;
+ (BOOL)fillsBackgroundWithContentForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)setupContentView;
- (void)flightController:(id)a0 didSelectLeg:(long long)a1 ofFlight:(long long)a2;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
