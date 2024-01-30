@class NSString, CHTextInputTarget, NSIndexSet;

@interface CHTextInputTargetContentInfo : NSObject <NSMutableCopying>

@property (readonly, retain, nonatomic) CHTextInputTarget *textInputTarget;
@property (readonly, nonatomic) long long textContentLength;
@property (readonly, copy, nonatomic) NSString *referenceSubstring;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } referenceSubstringRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } strokeCoveredTextRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedTextRange;
@property (readonly, nonatomic) BOOL isCursorStrong;
@property (readonly, nonatomic) BOOL containsCommittedStrokes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } activePreviewRange;
@property (readonly, nonatomic) int contentType;
@property (readonly, nonatomic) int autoCapitalizationMode;
@property (readonly, nonatomic) BOOL isSingleLine;
@property (readonly, nonatomic) BOOL supportsAutoLineBreaks;
@property (readonly, nonatomic) long long lastCharacterLevelPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *characterRectsInReferenceSubstring;
@property (readonly, copy, nonatomic) NSIndexSet *protectedCharacterIndexes;

- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_initWithTextInputTarget:(id)a0 contentLength:(long long)a1 referenceSubstring:(id)a2 referenceSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 strokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 isCursorStrong:(BOOL)a7 activePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 contentType:(int)a9 autoCapitalizationMode:(int)a10 isSingleLine:(BOOL)a11 lastCharacterLevelPosition:(long long)a12 protectedCharacterIndexes:(id)a13;
- (id)initWithTextInputTarget:(id)a0 contentLength:(long long)a1 referenceSubstring:(id)a2 referenceSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 strokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 isCursorStrong:(BOOL)a7 activePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 contentType:(int)a9 isSingleLine:(BOOL)a10 lastCharacterLevelPosition:(long long)a11;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })characterRectForCharacterIndex:(long long)a0;
- (void)enumerateCharacterRectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 reverse:(BOOL)a1 block:(id /* block */)a2;
- (void)enumerateCharacterRectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 block:(id /* block */)a1;
- (id)initWithTextInputTarget:(id)a0 contentLength:(long long)a1 referenceSubstring:(id)a2 referenceSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 strokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 isCursorStrong:(BOOL)a7 activePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 contentType:(int)a9 autoCapitalizationMode:(int)a10 isSingleLine:(BOOL)a11 lastCharacterLevelPosition:(long long)a12;
- (id)initWithTextInputTarget:(id)a0 contentLength:(long long)a1 referenceSubstring:(id)a2 referenceSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 strokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 activePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7 contentType:(int)a8 lastCharacterLevelPosition:(long long)a9;
- (long long)absoluteLocationFromRelativeLocation:(long long)a0;
- (long long)relativeLocationFromAbsoluteLocation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visualCharacterRectForCharacterIndex:(long long)a0;
- (id)referenceSubstringInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })referenceSubstringRangeOfComposedCharacterAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionCharacterRects;

@end
