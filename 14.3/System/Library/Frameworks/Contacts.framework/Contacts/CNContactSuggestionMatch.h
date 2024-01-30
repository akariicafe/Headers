@class SGContactMatch, SGContact, NSString;

@interface CNContactSuggestionMatch : NSObject

@property (retain, nonatomic) SGContactMatch *contactMatch;
@property (retain, nonatomic) SGContact *contact;
@property (retain, nonatomic) NSString *mainStoreLinkedIdentifier;

+ (id)suggestionFromContactMatch:(id)a0;
+ (void)fetchLinkedIdentifiersForContactSuggestionMatches:(id)a0 fromSuggestionService:(id)a1;

- (void).cxx_destruct;

@end
