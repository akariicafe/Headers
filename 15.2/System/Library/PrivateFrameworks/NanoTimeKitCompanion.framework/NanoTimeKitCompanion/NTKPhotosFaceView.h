@class NTKCachedPhoto, NSString, NTKPhotosReader, _NTKPhotoIndexGenerator, UIView, NSMutableArray, UITapGestureRecognizer;

@interface NTKPhotosFaceView : NTKBasePhotosFaceView <NTKPhotosReaderDelegate> {
    unsigned char _isContentLoaded : 1;
    unsigned char _isTimetravelScrubbing : 1;
    unsigned char _isAnalysisOperationInProgress : 1;
    unsigned char _inPhotoTransition : 1;
    NTKPhotosReader *_reader;
    _NTKPhotoIndexGenerator *_generator;
    unsigned long long _currentContent;
    unsigned long long _currentAnalysisOperationID;
    UITapGestureRecognizer *_singleTapGesture;
    UIView *_photoTransitionSnapshotView;
    UIView *_photoTransitionCornerView;
    unsigned long long _queuedTransitionCount;
    unsigned long long _preloadGeneration;
    unsigned long long _numberOfPhotos;
    id /* block */ _enqueuePreloadedPhotoCompletion;
    NSMutableArray *_preloaded;
    NSMutableArray *_toload;
    unsigned long long _deviceSizeClass;
}

@property (retain, nonatomic) NTKCachedPhoto *presentedPhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_handleSingleTap:(id)a0;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_cleanupAfterEditing;
- (void)_finalizeForSnapshotting:(id /* block */)a0;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_updateImageToBlur;
- (void)_applyFrozen;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (Class)photosFaceClass;
- (double)_backgroundImageAlphaForEditMode:(long long)a0;
- (BOOL)_preloadNextPhoto;
- (void)_configureForEditMode:(long long)a0;
- (void)_didStartPlayingIrisOnSingleTap;
- (double)_timeLabelAlphaForEditMode:(long long)a0;
- (void)_updateContents:(BOOL)a0;
- (void)_updateDateAttributesAnimated:(BOOL)a0;
- (void)_updateForResourceDirectoryChange:(id)a0;
- (void)_nextPhotoAnimated:(BOOL)a0 preroll:(BOOL)a1 method:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_clearPreloaded;
- (void)_resetTapAnimationState;
- (void)_updateDateAttributesAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)_dequeueToLoadIfMatchingGeneration:(unsigned long long)a0;
- (BOOL)_enqueuePreloadedPhoto:(id)a0 ifMatchingGeneration:(unsigned long long)a1;
- (void)_displayCachedPhoto:(id)a0 animated:(BOOL)a1 preroll:(BOOL)a2 completion:(id /* block */)a3;
- (void)_startBackgroundRefill;
- (void)_nextPhotoReadyAnimated:(BOOL)a0 preroll:(BOOL)a1 completion:(id /* block */)a2;
- (void)_animationFinished:(BOOL)a0;
- (BOOL)_shouldAnimationContinue:(BOOL)a0;
- (void)_animationStart;
- (id)_analysisCacheKeyFor:(id)a0;
- (id)_cachedAnalysisForKey:(id)a0;
- (BOOL)_canOperationProceed:(unsigned long long)a0;
- (id)_createAndCachePhotoAnalysisForKey:(id)a0 dateAlignment:(unsigned long long)a1 image:(id)a2;
- (void)_operationIsDone;
- (id)_analysisForAlignment:(unsigned long long)a0;
- (void)_updateReader:(BOOL)a0;
- (void)readerDidChange:(id)a0;

@end
