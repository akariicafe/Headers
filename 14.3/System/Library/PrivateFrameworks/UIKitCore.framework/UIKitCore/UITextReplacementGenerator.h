@class NSString, UITextRange;

@interface UITextReplacementGenerator : NSObject

@property (retain, nonatomic) UITextRange *replacementRange;
@property (copy, nonatomic) NSString *stringToReplace;

- (BOOL)isStringToReplaceMisspelled;
- (void).cxx_destruct;
- (BOOL)shouldAllowString:(id)a0 intoReplacements:(id)a1;
- (id)replacementWithText:(id)a0;
- (void)addPlaceholderForEmptyReplacements:(id)a0;
- (id)replacements;

@end
