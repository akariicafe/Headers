@class NSString;

@interface TSWPFloatingCommentLayout : TSWPShapeLayout <TSWPStyleProvider>

@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fill;
- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)supportsRotation;
- (id)styleProvider;
- (int)wrapType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (Class)repClassOverride;
- (id)paragraphStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)shouldDisplayGuides;
- (BOOL)allowsConnections;
- (BOOL)shouldBeDisplayedInShowMode;
- (BOOL)canBeIntersected;
- (BOOL)canResetTextAndObjectHandles;
- (id)commentInfo;

@end
