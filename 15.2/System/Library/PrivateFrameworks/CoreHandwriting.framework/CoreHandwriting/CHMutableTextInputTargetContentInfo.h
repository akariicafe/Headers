@class NSIndexSet, CHTextInputTarget;

@interface CHMutableTextInputTargetContentInfo : CHTextInputTargetContentInfo <NSCopying>

@property (retain, nonatomic) CHTextInputTarget *textInputTarget;
@property (nonatomic) long long textContentLength;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } strokeCoveredTextRange;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedTextRange;
@property (nonatomic) BOOL isCursorStrong;
@property (nonatomic) BOOL containsCommittedStrokes;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } activePreviewRange;
@property (nonatomic) int contentType;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) BOOL isSingleLine;
@property (nonatomic) BOOL supportsAutoLineBreaks;
@property (nonatomic) long long lastCharacterLevelPosition;
@property (copy, nonatomic) NSIndexSet *protectedCharacterIndexes;

- (void)setSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContentType:(int)a0;
- (void)setTextInputTarget:(id)a0;
- (void)setTextContentLength:(long long)a0;
- (void)setActivePreviewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setLastCharacterLevelPosition:(long long)a0;
- (void)setIsSingleLine:(BOOL)a0;
- (void)setSupportsAutoLineBreaks:(BOOL)a0;
- (void)setIsCursorStrong:(BOOL)a0;
- (void)setAutoCapitalizationMode:(int)a0;
- (void)setAutoCorrectionMode:(int)a0;
- (void)setStrokeCoveredTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setReferenceSubstring:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 characterRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)setProtectedCharacterIndexes:(id)a0;
- (void)setContainsCommittedStrokes:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })referenceSubstringRange;
- (id)referenceSubstring;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)characterRectsInReferenceSubstring;

@end
