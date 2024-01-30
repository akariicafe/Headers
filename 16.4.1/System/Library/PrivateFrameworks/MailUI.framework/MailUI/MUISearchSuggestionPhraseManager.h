@class NSString, NSArray, CSSuggestion, NSDictionary;
@protocol EMVIPManager;

@interface MUISearchSuggestionPhraseManager : NSObject

@property (readonly, copy, nonatomic) NSString *phrase;
@property (readonly, copy, nonatomic) NSArray *selectedSuggestions;
@property (readonly, nonatomic) id<EMVIPManager> vipManager;
@property (readonly, nonatomic) CSSuggestion *updatedSuggestion;
@property (readonly, copy, nonatomic) NSString *scopeIdentifierForPeopleSuggestions;
@property (readonly, copy, nonatomic) NSArray *inputLanguages;
@property (readonly, copy, nonatomic) NSDictionary *customFlags;
@property (readonly, copy, nonatomic) NSArray *implicitSuggestions;
@property (readonly, copy, nonatomic) NSString *filterQuery;
@property (readonly, copy, nonatomic) NSArray *excludedMailboxes;
@property (readonly, nonatomic) BOOL hasPhraseOrSuggestions;
@property (readonly, nonatomic) unsigned char phraseKind;
@property (readonly, nonatomic) unsigned long long signpostID;

+ (id)phraseManagerWithPhrase:(id)a0 updatedSuggestion:(id)a1 filterQuery:(id)a2 inputLanguages:(id)a3 customFlags:(id)a4;

- (void).cxx_destruct;
- (id)initWithPhrase:(id)a0 selectedSuggestions:(id)a1 vipManager:(id)a2 updatedSuggestion:(id)a3 scopeIdentifierForPeopleSuggestions:(id)a4 inputLanguages:(id)a5 implicitSuggestions:(id)a6 filterQuery:(id)a7 excludedMailboxes:(id)a8 customFlags:(id)a9;
- (id)spotlightQueryStrings;

@end
