@class NSString, NSArray;

@interface NSParagraphStyle : NSObject <_NSParagraphStyleMarkdownSettings, NSCopying, NSMutableCopying, NSSecureCoding> {
    double _lineSpacing;
    double _paragraphSpacing;
    double _headIndent;
    double _tailIndent;
    double _firstLineHeadIndent;
    double _minimumLineHeight;
    double _maximumLineHeight;
    NSArray *_tabStops;
    struct { unsigned char alignment : 4; unsigned char lineBreakMode : 4; unsigned char tabStopsIsMutable : 1; unsigned char isNaturalDirection : 1; unsigned char rightToLeftDirection : 1; unsigned char fixedMultiple : 2; unsigned char tightensForTruncation : 1; unsigned int refCount : 18; } _flags;
    double _defaultTabInterval;
    id _extraData;
}

@property (class, readonly, copy, nonatomic) NSParagraphStyle *defaultParagraphStyle;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *codeBlockIntentLanguageHint;
@property (readonly, copy, nonatomic) NSArray *_presentationIntents;
@property (readonly, copy, nonatomic) NSArray *presentationIntents;
@property (readonly) long long _listIntentOrdinal;
@property (readonly) long long listIntentOrdinal;
@property (readonly) long long headerLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double lineSpacing;
@property (readonly, nonatomic) double paragraphSpacing;
@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) double headIndent;
@property (readonly, nonatomic) double tailIndent;
@property (readonly, nonatomic) double firstLineHeadIndent;
@property (readonly, nonatomic) double minimumLineHeight;
@property (readonly, nonatomic) double maximumLineHeight;
@property (readonly, nonatomic) long long lineBreakMode;
@property (readonly, nonatomic) long long baseWritingDirection;
@property (readonly, nonatomic) double lineHeightMultiple;
@property (readonly, nonatomic) double paragraphSpacingBefore;
@property (readonly, nonatomic) float hyphenationFactor;
@property (readonly, nonatomic) BOOL usesDefaultHyphenation;
@property (readonly, copy, nonatomic) NSArray *tabStops;
@property (readonly, nonatomic) double defaultTabInterval;
@property (readonly, nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (readonly, nonatomic) unsigned long long lineBreakStrategy;

+ (void)initialize;
+ (long long)_defaultWritingDirection;
+ (float)_defaultHyphenationFactor;
+ (long long)defaultWritingDirectionForLanguage:(id)a0;

- (unsigned long long)_lineBoundsOptions;
- (long long)compositionLanguage;
- (float)tighteningFactorForTruncation;
- (id)textLists;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_allocExtraData;
- (void)_deallocExtraData;
- (id)_initWithParagraphStyle:(id)a0;
- (BOOL)allowsHangingPunctuation;
- (BOOL)usesOpticalAlignment;
- (BOOL)_isSuitableForFastStringDrawingWithAlignment:(long long *)a0 mirrorsTextAlignment:(BOOL)a1 lineBreakMode:(long long *)a2 tighteningFactorForTruncation:(double *)a3;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)textBlocks;
- (void)dealloc;

@end
