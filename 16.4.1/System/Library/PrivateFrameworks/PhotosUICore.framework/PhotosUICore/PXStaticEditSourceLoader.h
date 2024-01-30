@class NSNumber, NSString, NSProgress, PICompositionController, NSError, PLEditSource;

@interface PXStaticEditSourceLoader : NSObject <PXEditSourceLoader>

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) PLEditSource *editSource;
@property (readonly, nonatomic) PLEditSource *overcaptureEditSource;
@property (readonly, nonatomic) PLEditSource *activeEditSource;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, copy, nonatomic) PICompositionController *originalCompositionController;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) long long baseVersion;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSNumber *loadDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginLoading;
- (void).cxx_destruct;
- (id)initWithEditSource:(id)a0 compositionController:(id)a1 baseVersion:(long long)a2 contentIdentifier:(id)a3;

@end
