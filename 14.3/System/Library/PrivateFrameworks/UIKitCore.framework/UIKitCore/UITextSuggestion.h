@class NSString, TIKeyboardCandidate;

@interface UITextSuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL _shouldPersist;
@property (readonly, nonatomic) TIKeyboardCandidate *_keyboardCandidate;
@property (readonly, copy, nonatomic) NSString *inputText;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) BOOL displayStylePlain;

+ (id)textSuggestionWithInputText:(id)a0;
+ (id)textSuggestionWithInputText:(id)a0 searchText:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInputText:(id)a0 searchText:(id)a1 displayText:(id)a2 headerText:(id)a3;

@end
