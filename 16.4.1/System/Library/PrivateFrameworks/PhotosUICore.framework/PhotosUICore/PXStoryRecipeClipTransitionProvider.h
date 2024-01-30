@class PFStoryAutoEditFrequencyTable, PFStoryAutoEditConfiguration;
@protocol PFRandomNumberGenerator;

@interface PXStoryRecipeClipTransitionProvider : NSObject {
    PFStoryAutoEditFrequencyTable *_baseTransitionTable;
    PFStoryAutoEditFrequencyTable *_interMomentTransitionTable;
    PFStoryAutoEditFrequencyTable *_portraitTransitionTable;
    PFStoryAutoEditFrequencyTable *_nUpTransitionTable;
    PFStoryAutoEditFrequencyTable *_interModuleTransitionTable;
    id<PFRandomNumberGenerator> _randomNumberGenerator;
}

@property (readonly, nonatomic) PFStoryAutoEditConfiguration *configuration;
@property (readonly, nonatomic) long long songPace;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_cameraMovement:(long long)a0 allowsTransition:(long long)a1;
- (struct { long long x0; double x1; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; struct { char x0; char x1; } x3; } x2; })_nextTransitionFromTable:(id)a0 currentMotion:(struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })a1 nextMotion:(struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })a2;
- (id)initWithConfiguration:(id)a0 colorGradeCategory:(id)a1 songPace:(long long)a2 randomNumberGenerator:(id)a3;
- (struct { long long x0; double x1; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; struct { char x0; char x1; } x3; } x2; })nextIntraMomentTransition;
- (void)provideTransitionsForMomentClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withClipCatalog:(id)a1 usingBlock:(id /* block */)a2;

@end
