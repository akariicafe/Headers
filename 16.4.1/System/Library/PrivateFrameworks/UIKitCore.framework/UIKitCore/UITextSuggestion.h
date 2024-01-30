@class NSString, TIKeyboardCandidate, NSUUID, UIImage;

@interface UITextSuggestion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *inputText;
@property (readonly, nonatomic) TIKeyboardCandidate *_keyboardCandidate;
@property (readonly, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) BOOL displayStylePlain;
@property (copy, nonatomic) UIImage *image;

+ (id)classFallbacksForKeyedArchiver;
+ (id)decodeTextSuggestions:(id)a0;
+ (id)encodeTextSuggestions:(id)a0;
+ (id)textSuggestionWithInputText:(id)a0;
+ (id)textSuggestionWithInputText:(id)a0 searchText:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInputText:(id)a0 searchText:(id)a1 displayText:(id)a2 headerText:(id)a3;

@end
