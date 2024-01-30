@class PGManagerWorkingContext;

@interface PGSharedLibrarySuggestionsProcessor : NSObject {
    PGManagerWorkingContext *_workingContext;
}

+ (id)libraryScopeToUseWithPhotoLibrary:(id)a0;
+ (BOOL)shouldIncludeAsset:(id)a0 curationContext:(id)a1 rejectionReason:(id *)a2;

- (void).cxx_destruct;
- (BOOL)processSuggestionsFromStartDate:(id)a0 toDate:(id)a1 withError:(id *)a2 progressBlock:(id /* block */)a3;
- (id)_evaluatorForLibraryScopeRules:(id)a0 withGraph:(id)a1;
- (id)_momentsForMomentNodes:(id)a0 inPhotoLibrary:(id)a1;
- (id)_rulesForLibraryScope:(id)a0;
- (id)_startDateFromLibraryScopeRules:(id)a0;
- (BOOL)_suggestAssetsFromMoments:(id)a0 libraryScope:(id)a1 curationContext:(id)a2 error:(id *)a3;
- (id)evaluatorWithGraph:(id)a0;
- (id)initWithWorkingContext:(id)a0;

@end
