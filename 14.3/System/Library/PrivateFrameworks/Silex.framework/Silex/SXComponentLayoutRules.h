@interface SXComponentLayoutRules : NSObject <NSCopying>

@property (nonatomic) unsigned long long minimumColumnSpan;
@property (nonatomic) BOOL allowsIntersection;
@property (nonatomic) BOOL shouldSpanAllColumns;
@property (nonatomic) BOOL allowsSiblingBasedResizing;
@property (nonatomic) BOOL shouldIgnoreDocumentMargin;

+ (id)twoColumnLayoutRules;
+ (id)fullWidthLayoutRules;
+ (id)bodyComponentLayoutRules;
+ (id)defaultLayoutRules;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
