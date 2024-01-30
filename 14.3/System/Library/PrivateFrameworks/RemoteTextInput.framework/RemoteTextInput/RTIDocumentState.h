@class NSAttributedString, NSMutableDictionary, TIDocumentState;

@interface RTIDocumentState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *_selectionRects;
@property (retain, nonatomic) TIDocumentState *documentState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } caretRectInWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstSelectionRectInWindow;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedTextRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } markedTextRange;
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetTextRects;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })deltaForSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
