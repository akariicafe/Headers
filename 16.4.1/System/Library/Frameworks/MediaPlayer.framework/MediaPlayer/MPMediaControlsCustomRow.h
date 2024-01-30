@class NSString, UTType;

@interface MPMediaControlsCustomRow : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) UTType *type;
@property (copy, nonatomic) NSString *titleOverride;

+ (id)rowWithType:(id)a0 titleOverride:(id)a1 identifier:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
