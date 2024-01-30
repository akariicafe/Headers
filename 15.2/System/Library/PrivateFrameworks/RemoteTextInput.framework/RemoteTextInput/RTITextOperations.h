@class NSAttributedString, NSMutableDictionary, NSDictionary, TIKeyboardOutput, TIKeyboardIntermediateText, NSString, RTIStyledIntermediateText;

@interface RTITextOperations : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *attributedPlaceholders;
@property (readonly, nonatomic) NSMutableDictionary *mutableAttributedPlaceholders;
@property (readonly, nonatomic) TIKeyboardOutput *keyboardOutput;
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText;
@property (retain, nonatomic) RTIStyledIntermediateText *styledIntermediateText;
@property (copy, nonatomic) NSString *textToAssert;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectionRangeToAssert;
@property (nonatomic) SEL editingActionSelector;
@property (readonly, nonatomic) NSAttributedString *attributedInsertionText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textCheckingAnnotationRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textCheckingReplacementRange;
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textCheckingAnnotationRemovalRange;
@property (copy, nonatomic) NSString *textCheckingAnnotationToRemove;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)insertAttributedText:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_createAttributedPlaceholdersIfNecessary;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertAttributedText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
