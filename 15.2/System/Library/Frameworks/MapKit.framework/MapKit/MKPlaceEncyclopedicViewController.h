@class NSString, MKPlaceTextBlockCell, NSMutableArray;
@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    BOOL _textBlockExpanded;
    MKPlaceTextBlockCell *_textCell;
    NSMutableArray *_factoidCells;
}

@property (retain, nonatomic) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (weak, nonatomic) id<MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_factoids;
- (void)_updateViews;
- (id)_textBlockTitle;
- (void)_viewEncyclopedicContent;
- (id)_textBlockText;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)draggableContent;

@end
