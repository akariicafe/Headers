@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)personContextNonePredicates;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)initWithFetchOptions:(id)a0;
- (id)subpredicates;
- (id)personContextAdditionalPredicate;
- (id)personContextPeopleHomePredicate;
- (void).cxx_destruct;
- (id)personContextDetailPredicate;
- (id)_notVerifiedPredicate;
- (id)personContextOneUpPredicate;
- (id)_notHiddenTypePredicate;
- (id)_verifiedVisiblePredicate;
- (id)_verifiedPredicate;

@end
