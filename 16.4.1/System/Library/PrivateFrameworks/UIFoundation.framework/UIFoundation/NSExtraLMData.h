@class NSLock, NSMutableSet, NSTextContainer, NSLayoutManagerTextBlockRowArrayCache, CUIStyleEffectConfiguration, NSRunStorage, NSMutableArray, NSParagraphArbitrator;

@interface NSExtraLMData : NSObject {
    NSRunStorage *_attachmentSizesRun;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentAttachmentRect;
    unsigned long long _currentAttachmentIndex;
    NSLock *_fillHoleLock;
    NSRunStorage *_fragmentRunsExtras;
    id _temporaryAttributes;
    NSTextContainer *_firstTextContainer;
    struct __CFDictionary { } *_textContainerIndexes;
    struct __CFDictionary { } *_textContainerGlyphIndexes;
    long long _typesetterBehavior;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedFontBounds;
    double _cachedUnderlineThickness;
    double _cachedUnderlinePosition;
    double _cachedUnderlineAdjustment;
    struct _NSRange { unsigned long long location; unsigned long long length; } _cachedUnderlineRange;
    NSMutableArray *_blockRunsArray;
    double _hyphenationFactor;
    NSMutableArray *_insertionPointCache;
    struct _NSGlyphTree { struct _NSGlyphNode *rootNode; struct _NSGlyphNode *curNode; unsigned long long curCharIndex; unsigned long long curGlyphIndex; } _glyphTree;
    struct _NSLayoutTree { struct _NSLayoutNode *rootNode; struct _NSLayoutNode *curNode; unsigned long long curGlyphIndex; double curLongitudinalOrigin; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extraLineFragmentRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extraLineFragmentUsedRect; unsigned long long glyphsPerLineEstimate; double offsetPerLineEstimate; } _layoutTree;
    struct _NSRange { unsigned long long location; unsigned long long length; } _firstTextViewVisibleCharRange;
    struct CGSize { double width; double height; } _firstTextViewVisibleOffset;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastInvalidatedCharRange;
    double _lastInvalidatedLongitudinalPosition;
    NSTextContainer *_lastInvalidatedTextContainer;
    NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;
    NSParagraphArbitrator *_paragraphArbitrator;
    CUIStyleEffectConfiguration *_styleEffectConfig;
    NSMutableSet *_viewProviders;
    struct __lmFlags2 { unsigned char glyphCause : 6; unsigned char layoutCause : 6; unsigned char delegateRespondsToTempAttrs : 1; unsigned char processingFirstTextViewVisible : 1; unsigned char temporarySpacingChange : 1; unsigned char alwaysDrawsActive : 1; unsigned char usesOldShowPackedGlyphs : 1; unsigned char drawsUnderlinesLikeWebKit : 1; unsigned char drawsDebugBaselines : 1; unsigned char mirrorsTextAlignment : 1; unsigned char forcesTrackingFloor : 1; unsigned char isLiveScrolling : 1; unsigned char hasCustomUnderlineColor : 1; unsigned char applicationPlatformContext : 3; unsigned char limitsLayoutForSuspiciousContents : 1; unsigned char delegateRespondsToRenderingColor : 1; unsigned char firstTextViewRespondsToRenderingColor : 1; unsigned char usesCustomBackgroundRectArray : 1; unsigned char usesDefaultHyphenation : 1; unsigned char reserved : 1; } _lmFlags2;
    struct _NSGlyphIndexForPointCache { struct CGPoint { double x; double y; } point; void *textContainer; unsigned long long indexCache; double fractionCache; } _glyphIndexForPointCache;
    long long _currentChangeInLength;
    double _timeStampForResizeInScroll;
    id /* block */ _didCompleteLayoutObserverBlock;
}

@end
