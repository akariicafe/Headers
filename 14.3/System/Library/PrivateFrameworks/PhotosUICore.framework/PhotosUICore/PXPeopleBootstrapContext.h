@class NSString, PXPeopleSuggestionManager, PXPeopleNameSelection;
@protocol PXPerson, PXPeopleSuggestionManagerDataSource, PXCMMPersonSuggestion;

@interface PXPeopleBootstrapContext : NSObject

@property (retain, nonatomic) id<PXCMMPersonSuggestion> personSuggestion;
@property (retain) id<PXPerson> sourcePerson;
@property (retain) id<PXPerson> targetPerson;
@property unsigned long long bootstrapType;
@property (retain) PXPeopleNameSelection *nameSelection;
@property (retain) PXPeopleSuggestionManager *suggestionManager;
@property (nonatomic) BOOL skipInitialAction;
@property (copy, nonatomic) id /* block */ preCommitBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) BOOL wantsNaming;
@property (nonatomic) BOOL wantsMergeCandidateSuggestions;
@property (nonatomic) BOOL wantsPostNaming;
@property (retain, nonatomic) id<PXPeopleSuggestionManagerDataSource> prefetchedDataSource;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)contextWithPerson:(id)a0 type:(unsigned long long)a1;
+ (id)contextWithPersonSuggestion:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
