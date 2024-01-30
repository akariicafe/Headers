@class NSString, UITextPosition;

@interface _UITextInputStringTokenizerSubrange : NSObject

@property (readonly, nonatomic) NSString *substring;
@property (readonly, nonatomic) UITextPosition *basePosition;
@property (nonatomic) long long indexOfBase;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } relevantRange;

+ (id)subrangeWithSubstring:(id)a0 basePosition:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
