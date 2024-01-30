@class NSString, TIKeyboardCandidate, UIImage;

@interface UITextSuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) TIKeyboardCandidate *_keyboardCandidate;
@property (readonly, copy, nonatomic) NSString *inputText;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) BOOL displayStylePlain;
@property (copy, nonatomic) UIImage *image;

+ (id)textSuggestionWithInputText:(id)a0 searchText:(id)a1;
+ (id)textSuggestionWithInputText:(id)a0;

- (void).cxx_destruct;
- (id)initWithInputText:(id)a0 searchText:(id)a1 displayText:(id)a2 headerText:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
