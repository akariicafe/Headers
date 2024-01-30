@class NSString, VEKProduction, VEKResult, MiroMovie, PUActivityProgressController, NSObject, UIViewController, LPLinkMetadata;
@protocol MiroPreventDismissalDelegate, PMActivityItemProviderDelegate, OS_dispatch_semaphore;

@interface PMActivityItemProvider : UIActivityItemProvider {
    BOOL _debugDisableProgressUpdates;
}

@property (retain, nonatomic) VEKProduction *production;
@property (retain, nonatomic) PUActivityProgressController *progressController;
@property (retain, nonatomic) NSString *preset;
@property (retain, nonatomic) NSString *exportedFilePath;
@property (nonatomic) BOOL userCancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *readyToReturnItem;
@property (retain, nonatomic) VEKResult *result;
@property (retain, nonatomic) NSString *shareMetadataSummary;
@property (retain, nonatomic) NSString *shareMetadataTitle;
@property (weak, nonatomic) id<PMActivityItemProviderDelegate> delegate;
@property (weak, nonatomic) id<MiroPreventDismissalDelegate> preventDismissalDelegate;
@property (weak, nonatomic) UIViewController *presenter;
@property (retain, nonatomic) MiroMovie *miroMovie;
@property (nonatomic) double exportAspect;
@property (retain, nonatomic) LPLinkMetadata *shareHeaderMetadata;

- (void)_applicationWillResignActive:(id)a0;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPlaceholderItem:(id)a0;
- (id)item;
- (void)cancelExport;
- (id)_stringFromTimeInterval:(double)a0;
- (void)_unloadVEKObjects;
- (void)beginExport;
- (id)initWithProduction:(id)a0 result:(id)a1;

@end
