@class NSString;

@interface UITextAutofillSuggestion : UITextSuggestion

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *password;

+ (id)autofillSuggestionWithUsername:(id)a0 password:(id)a1;

- (void).cxx_destruct;
- (id)_keyboardCandidate;
- (id)initWithUsername:(id)a0 password:(id)a1;

@end
