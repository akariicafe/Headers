@class NSSet, NSMutableSet;

@interface CNSuggestedSaveRequest : CNSaveRequest

@property (retain, nonatomic) NSMutableSet *mutableConfirmedSuggestions;
@property (retain, nonatomic) NSMutableSet *mutableRejectedSuggestions;
@property (readonly, copy, nonatomic) NSSet *confirmedSuggestions;
@property (readonly, copy, nonatomic) NSSet *rejectedSuggestions;

- (id)storeIdentifier;
- (void)rejectSuggestion:(id)a0;
- (void)confirmSuggestion:(id)a0;
- (void).cxx_destruct;

@end
