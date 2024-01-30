@class NSString, UITextRange;

@interface UITextReplacementGenerator : NSObject

@property (retain, nonatomic) UITextRange *replacementRange;
@property (copy, nonatomic) NSString *stringToReplace;

- (BOOL)isStringToReplaceMisspelled;
- (id)replacementWithText:(id)a0;
- (BOOL)shouldAllowString:(id)a0 intoReplacements:(id)a1;
- (void)addPlaceholderForEmptyReplacements:(id)a0;
- (void).cxx_destruct;
- (id)replacements;

@end
