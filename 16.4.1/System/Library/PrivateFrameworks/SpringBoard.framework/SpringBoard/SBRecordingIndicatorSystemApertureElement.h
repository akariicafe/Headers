@class SBRecordingIndicatorManager, NSString, UIView;
@protocol SAElement, SAElementHosting;

@interface SBRecordingIndicatorSystemApertureElement : NSObject <SAIndicatorBehavior, SAUIIndicatorElementViewProviding, SBSystemApertureSuppressible, SBSystemApertureElementVisibilityObserving, SAElement>

@property (weak, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *indicatorView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;

- (id)viewProvider;
- (void).cxx_destruct;
- (void)element:(id)a0 visibilityWillChange:(BOOL)a1;
- (BOOL)hasIndicatorBehavior;
- (id)initWithRecordingIndicatorView:(id)a0 recordingIndicatorManager:(id)a1;
- (BOOL)shouldSuppressElementWhileOnCoversheet;
- (BOOL)shouldSuppressElementWhileOtherElementsPresent;

@end
