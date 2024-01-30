@interface _DUIPotentialDrop : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long operation;
@property (nonatomic) BOOL forbidden;
@property (nonatomic) BOOL precise;
@property (nonatomic) BOOL prefersFullSizePreview;
@property (nonatomic) long long preferredBadgeStyle;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
