@class PXPhotoKitUIMediaProvider, NSString, NSArray, PXAssetsDataSourceManager, NSDate, PXSurveyQuestionsDataSource, PXGadgetNavigationHelper, PXAssetReference, PHPhotoLibrary;
@protocol PXGadgetTransition, PXGadgetDelegate;

@interface PXSurveyQuestionsGadgetProvider : PXGadgetProvider <PXSurveyQuestionGadgetDelegate, PXSurveyQuestionCongratulationsGadgetDelegate, PXOneUpPresentationDelegate, PXPhotoLibraryUIChangeObserver> {
    PXPhotoKitUIMediaProvider *_oneUpMediaProvider;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
    PHPhotoLibrary *_photoLibrary;
}

@property (retain, nonatomic) NSArray *surveyGadgets;
@property (retain, nonatomic) PXSurveyQuestionsDataSource *dataSource;
@property (nonatomic) BOOL currentlyLoadingMoreQuestions;
@property (retain, nonatomic) NSDate *previousMostRecentQuestionCreationDate;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAppleInternal;

- (id)prepareForPhotoLibraryChange:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (BOOL)_prepareForOneUpPresentationForGadget:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)resumeLibraryUpdates;
- (void)pauseLibraryUpdates;
- (void)dealloc;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)didSelectActionButtonForType:(unsigned long long)a0;
- (void)didAnswerQuestionForGadget:(id)a0;
- (void)surveyQuestionGadgetsWantsOneUpPresentation:(id)a0;
- (void)_generateGadgetsWithLimit:(unsigned long long)a0 removeExistingGadgets:(BOOL)a1;
- (void)_generateGadgetsWithLimit:(unsigned long long)a0;
- (id)_gadgetForSurveyQuestion:(id)a0;
- (void)showViewController:(id)a0 fromGadget:(id)a1;
- (void)_showSubmitLabelDatabaseViewControllerIfNeededForGadget:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_addCongratulationsGadgetWithCompletionHandlerIfNeeded:(id /* block */)a0;
- (void)_handlePrepareForOneUpPresentationSuccessForGadget:(id)a0;
- (id)_targetGadgetForCurrentOneUpPresentation;
- (void)_reloadGadgetsWithLimit:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (long long)oneUpPresentationActionContext:(id)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (void)loadDataForGadgets;

@end
