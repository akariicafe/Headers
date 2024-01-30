@interface TSWPDropCapSpacing : NSObject <NSCopying>

@property (nonatomic) unsigned long long lineCount;
@property (nonatomic) unsigned long long elevatedLineCount;
@property (nonatomic) unsigned long long followingLineCount;
@property (nonatomic) double padding;
@property (nonatomic) BOOL allowSpanParagraphs;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) double maxWidthFactor;

+ (id)dropCapSpacingWithLineCount:(unsigned long long)a0 elevatedLineCount:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned long long)computedFlagsWithPropertyMap:(id)a0;

@end
