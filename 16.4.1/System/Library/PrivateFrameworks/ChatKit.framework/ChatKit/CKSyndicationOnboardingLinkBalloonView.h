@class LPLinkMetadata, LPLinkView;

@interface CKSyndicationOnboardingLinkBalloonView : CKTranscriptPluginBalloonView

@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;

+ (id)musicSpecialization;
+ (id)podcastSpecialization;
+ (id)tvSpecialization;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withURL:(id)a1;
- (void)setPluginViewToURL:(id)a0;

@end
