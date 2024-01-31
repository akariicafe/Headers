@class NSArray, NSDateFormatter, NSDate, AVPlayerController, AVInfoPanelDescriptionView;

@interface AVInfoPanelDescriptionViewController : UIViewController {
    NSDateFormatter *_yearFormatter;
    NSDateFormatter *_monthDayYearFormatter;
    AVInfoPanelDescriptionView *_descriptionView;
}

@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) double duration;
@property (nonatomic, getter=isClosedCaptioned) BOOL closedCaptioned;
@property (nonatomic) long long viewingModeBadge;
@property (readonly, nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSArray *actions;
@property (weak, nonatomic) AVPlayerController *playerController;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_updateActionButtons;
- (id)_durationString;
- (void)_loadPosterFromMetadataItem:(id)a0;
- (id)_metadataItemForIdentifiers:(id)a0;
- (id)_releaseDateStringStyle:(long long)a0;
- (void)_updatePosterViewWithImage:(id)a0;
- (void)_updateViewsWithNewMetadata;

@end
