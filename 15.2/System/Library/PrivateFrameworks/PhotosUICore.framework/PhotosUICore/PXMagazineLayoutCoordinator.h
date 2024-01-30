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
- (unsigned long long)currentLayoutsCount;
- (id)currentBestLayout;
- (BOOL)validateCurrentLayout;
- (void)validateCurrentLayoutAsFallback;
- (double)scoreOfLayout:(id)a0;
- (id)initWithPaddingInputs:(id)a0 tileAspectRatio:(double)a1 stopIfAnyGoodLayout:(BOOL)a2;

@end
