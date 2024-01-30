@class NSString;

@interface ICUITextSuggestion : UITextSuggestion

@property (copy, nonatomic) NSString *shortName;
@property (copy, nonatomic) NSString *uuidString;
@property (nonatomic) unsigned long long textSuggestionType;

- (void).cxx_destruct;
- (id)initWithShortName:(id)a0 uuidString:(id)a1 displayText:(id)a2 image:(id)a3 textSuggestionType:(unsigned long long)a4;

@end
