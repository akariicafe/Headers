@class NSArray, NSMutableArray, PXMagazineRectArray;

@interface PXMagazineLayoutCoordinator : NSObject {
    PXMagazineRectArray *_fallbackLayout;
    double _currentBestScore;
}

@property (readonly, nonatomic) NSArray *paddingInputs;
@property (readonly, nonatomic) double tileAspectRatio;
@property (readonly, nonatomic) BOOL stopIfAnyGoodLayout;
@property (retain, nonatomic) NSMutableArray *qualifiedLayouts;
@property (retain, nonatomic) PXMagazineRectArray *currentLayout;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) BOOL stop;

- (void).cxx_destruct;
- (id)initWithPaddingInputs:(id)a0 tileAspectRatio:(double)a1 stopIfAnyGoodLayout:(BOOL)a2;
- (BOOL)validateCurrentLayout;
- (double)scoreOfLayout:(id)a0;
- (void)validateCurrentLayoutAsFallback;
- (unsigned long long)currentLayoutsCount;
- (id)currentBestLayout;

@end
