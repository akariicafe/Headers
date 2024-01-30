@interface UIDropProposal : NSObject <NSCopying>

@property (nonatomic) unsigned long long operation;
@property (nonatomic, getter=_preferredBadgeStyle, setter=_setPreferredBadgeStyle:) long long preferredBadgeStyle;
@property (nonatomic, getter=isPrecise) BOOL precise;
@property (nonatomic) BOOL prefersFullSizePreview;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDropOperation:(unsigned long long)a0;

@end
