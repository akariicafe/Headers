@class _UILabelContent, UIColor;

@interface _UILabelSynthesizedContent : NSObject <NSCopying, NSMutableCopying> {
    struct { unsigned char eliminateShadows : 1; unsigned char overallWritingDirectionFollowsLayoutDirection : 1; unsigned char disableLinkHypenation : 1; unsigned char hasExplicitBaselineOffset : 1; } _flags;
}

@property (readonly, nonatomic) _UILabelContent *content;
@property (readonly, nonatomic) UIColor *overrideTextColor;
@property (readonly, nonatomic) BOOL eliminateShadows;
@property (readonly, nonatomic) long long semanticContentAttribute;
@property (readonly, nonatomic) BOOL overallWritingDirectionFollowsLayoutDirection;
@property (readonly, nonatomic) BOOL disableLinkHypenation;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) BOOL hasExplicitBaselineOffset;

- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)reverseNaturalAlignment;
- (id)_synthesizedAttributedString;
- (void)_isolateStringWritingDirectionInAttributedString:(id)a0;
- (void)_disablingHyphenationIfURLsDetectedInAttributedString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)synthesizedAttributes;
- (id)synthesizedAttributedString;
- (unsigned long long)hash;

@end
