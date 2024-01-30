@class NSArray, PHFetchResult, NSString;

@interface PXPeopleSuggestionDataSource : NSObject <PHPhotoLibraryChangeObserver, PXPeopleSuggestionManagerDataSource>

@property (copy, nonatomic) NSArray *mergeCandidates;
@property (copy, nonatomic) PHFetchResult *mergeCandidateFetchResult;
@property (nonatomic) unsigned long long initialPageLimit;
@property (nonatomic) unsigned long long suggestionFetchType;
@property (nonatomic) unsigned long long flowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_mergeAndSaveUserFeedbackForPersons:(id)a0 personChangeRequest:(id)a1;

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)startListeningForLibraryChanges;
- (void)stopListeningForLibraryChanges;
- (id)suggestionsForPerson:(id)a0 withConfirmedSuggestions:(id)a1 andRejectedSuggestions:(id)a2 completion:(id /* block */)a3;
- (BOOL)cancelSuggestionForPerson:(id)a0 withToken:(id)a1 error:(id *)a2;
- (id)commitSuggestionsForPerson:(id)a0 withConfirmedSuggestions:(id)a1 andRejectedSuggestions:(id)a2;
- (id)initWithFlowType:(unsigned long long)a0;
- (id)fetchAndCacheMergeCandidatesForPerson:(id)a0;

@end
