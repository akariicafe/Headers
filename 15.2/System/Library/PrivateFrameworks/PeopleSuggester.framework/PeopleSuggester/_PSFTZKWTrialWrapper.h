@class _PASLock, TRIClient;

@interface _PSFTZKWTrialWrapper : NSObject {
    _PASLock *_lock;
    _PASLock *_updateLock;
}

@property (readonly, nonatomic) TRIClient *triClient;

+ (id)sharedInstance;
+ (void)runWithData:(id /* block */)a0;
+ (void)runIfUpdated:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)refresh;
- (void)runWithData:(id /* block */)a0;
- (void)runIfUpdated:(id /* block */)a0;
- (void)loadFactors;
- (void)flagAsSame;
- (void)flagAsUpdated;
- (BOOL)loadLevelAsBooleanFromFactor:(id)a0 withDefault:(BOOL)a1;
- (long long)loadLevelAsConfidenceCategoryFromFactor:(id)a0 withDefault:(long long)a1;
- (long long)loadLevelAsInteractionModelTypeFromFactor:(id)a0 withDefault:(long long)a1;

@end
