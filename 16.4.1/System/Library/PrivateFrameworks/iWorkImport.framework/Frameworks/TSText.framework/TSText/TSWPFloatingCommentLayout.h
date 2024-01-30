@class NSString;

@interface TSWPFloatingCommentLayout : TSWPShapeLayout <TSWPStyleProviding, TSWPStyleProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;

- (struct CGSize { double x0; double x1; })minimumSize;
- (id)fill;
- (id)styleProvider;
- (BOOL)supportsRotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (BOOL)allowsConnections;
- (id)characterStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)paragraphStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (Class)repClassOverride;
- (BOOL)shouldDisplayGuides;
- (int)wrapType;
- (BOOL)canBeIntersected;
- (BOOL)canResetTextAndObjectHandles;
- (id)listStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)shouldBeDisplayedInShowMode;
- (id)dropCapStyleAtParIndex:(unsigned long long)a0;
- (id)styleProviderForTextLayout:(id)a0;
- (id)textPropertiesForEquation:(id)a0 basedOnProperties:(id)a1;
- (BOOL)wantsToProvideStylesForTextLayout:(id)a0;
- (id)commentInfo;

@end
