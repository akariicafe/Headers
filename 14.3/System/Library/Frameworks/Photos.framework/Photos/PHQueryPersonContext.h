@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)personContextAdditionalPredicate;
- (void).cxx_destruct;
- (id)_notHiddenTypePredicate;
- (id)initWithFetchOptions:(id)a0;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)personContextNonePredicates;
- (id)personContextOneUpPredicate;
- (id)personContextDetailPredicate;
- (id)personContextPeopleHomePredicate;
- (id)_verifiedPredicate;
- (id)subpredicates;
- (id)_verifiedVisiblePredicate;
- (id)_notVerifiedPredicate;

@end
