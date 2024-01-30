@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
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
@property (readonly, copy, nonatomic) NSArray *tabStops;
@property (readonly, nonatomic) double defaultTabInterval;
@property (readonly, nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (readonly, nonatomic) unsigned long long lineBreakStrategy;

+ (void)initialize;
+ (long long)_defaultWritingDirection;
+ (float)_defaultHyphenationFactor;
+ (long long)defaultWritingDirectionForLanguage:(id)a0;

- (BOOL)_isSuitableForFastStringDrawingWithAlignment:(long long *)a0 mirrorsTextAlignment:(BOOL)a1 lineBreakMode:(long long *)a2 tighteningFactorForTruncation:(double *)a3;
- (id)textLists;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_lineBoundsOptions;
- (long long)compositionLanguage;
- (void)_allocExtraData;
- (long long)headerLevel;
- (id)_initWithParagraphStyle:(id)a0;
- (void)_deallocExtraData;
- (BOOL)allowsHangingPunctuation;
- (BOOL)usesOpticalAlignment;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)usesDefaultHyphenation;
- (id)textBlocks;
- (void)encodeWithCoder:(id)a0;
- (float)tighteningFactorForTruncation;

@end
