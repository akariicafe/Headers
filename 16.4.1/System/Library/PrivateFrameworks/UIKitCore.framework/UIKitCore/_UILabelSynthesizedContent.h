@class _UILabelContent, UIColor, NSTextEncapsulation;

@interface _UILabelSynthesizedContent : NSObject <NSCopying, NSMutableCopying> {
    NSTextEncapsulation *_textEncapsulation;
    struct { unsigned char eliminateShadows : 1; unsigned char overallWritingDirectionFollowsLayoutDirection : 1; unsigned char disableLinkHypenation : 1; unsigned char hasExplicitBaselineOffset : 1; } _flags;
}

@property (readonly, nonatomic) _UILabelContent *content;
@property (readonly, nonatomic) UIColor *overrideTextColor;
@property (readonly, nonatomic) BOOL eliminateShadows;
@property (readonly, nonatomic) long long semanticContentAttribute;
@property (readonly, nonatomic) BOOL overallWritingDirectionFollowsLayoutDirection;
@property (readonly, nonatomic) BOOL disableLinkHypenation;
@property (readonly, nonatomic) NSTextEncapsulation *textEncapsulation;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) BOOL hasExplicitBaselineOffset;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (void)_disablingHyphenationIfURLsDetectedInAttributedString:(id)a0;
- (void)_isolateStringWritingDirectionInAttributedString:(id)a0;
- (id)_synthesizedAttributedString;
- (BOOL)reverseNaturalAlignment;
- (id)synthesizedAttributedString;
- (id)synthesizedAttributes;

@end
