@class NSString, UIImage, PXRegionOfInterest, NSSet, PHQuestion, PXGadgetSpec, PXSurveyQuestionsGadgetContentView, PXSurveyQuestionConfigurationHandlers;
@protocol PXSurveyQuestionConfiguration, PXGadgetDelegate;

@interface PXSurveyQuestionGadget : NSObject <PXGadget, PXSurveyQuestionsGadgetContentViewDelegate> {
    long long _configurationRequestId;
}

@property (class, readonly, nonatomic) unsigned int confirmYesSoundID;

@property (retain, nonatomic) PXSurveyQuestionsGadgetContentView *contentView;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers;
@property (readonly, nonatomic) PHQuestion *question;
@property (readonly, nonatomic) id<PXSurveyQuestionConfiguration> configuration;
@property (nonatomic) unsigned long long answer;
@property (retain, nonatomic) NSSet *assetUUIDsAssociatedWithGadget;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic) BOOL currentlyInOneUp;
@property (nonatomic, getter=isContentHidden) BOOL contentHidden;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadResources;
+ (id)sharedWorkQueue;

- (id)init;
- (void).cxx_destruct;
- (void)gadgetContentView:(id)a0 didAnswer:(unsigned long long)a1 withReason:(id)a2;
- (id)initWithSurveyQuestion:(id)a0;
- (void)_updateSurveyQuestionStateFromAnswer:(unsigned long long)a0;
- (void)_didFinishUpdatingSurveyQuestionStateFromAnswer;
- (void)_playConfirmYesSound;
- (void)prepareCollectionViewItem:(id)a0;
- (void)removeCollectionViewItem:(id)a0;
- (id)uniqueGadgetIdentifier;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
