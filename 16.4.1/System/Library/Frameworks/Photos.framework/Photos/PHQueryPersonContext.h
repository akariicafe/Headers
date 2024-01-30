@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)personContextPeopleHomePredicate;
- (id)personContextNonePredicates;
- (id)_verifiedVisiblePredicate;
- (id)personContextAdditionalPredicate;
- (id)personContextOneUpPredicate;
- (id)_notVerifiedPredicate;
- (id)personContextDetailPredicate;
- (id)initWithFetchOptions:(id)a0;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)subpredicates;
- (id)_notHiddenTypePredicate;
- (id)_verifiedPredicate;
- (void).cxx_destruct;

@end
