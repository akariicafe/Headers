@class SFPunchout, NSString, SearchUIWatchListCardsManager, SFWatchListCardSection, SFImage;
@protocol SearchUIWatchListCardRowModelDelegate;

@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SearchUIWatchListCardsManager *manager;
@property (nonatomic) BOOL hasLoaded;
@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) long long buttonState;
@property (weak) id<SearchUIWatchListCardRowModelDelegate> delegate;
@property (retain, nonatomic) SFWatchListCardSection *cardSection;
@property (nonatomic) BOOL hasError;

- (int)separatorStyle;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 cardSection:(id)a1 asyncRowManager:(id)a2 queryId:(unsigned long long)a3;
- (id)punchouts;
- (void)updateWithText:(id)a0 buttonState:(long long)a1 image:(id)a2 punchout:(id)a3;
- (void)updateWithText:(id)a0 buttonState:(long long)a1;
- (BOOL)isDraggable;
- (BOOL)isTappable;
- (void)toggleAddToUpNextWithFeedbackDelegate:(id)a0;

@end
