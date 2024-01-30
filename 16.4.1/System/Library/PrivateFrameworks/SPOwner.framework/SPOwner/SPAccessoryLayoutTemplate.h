@class NSString;

@interface SPAccessoryLayoutTemplate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char partIdentifier;
@property (copy, nonatomic) NSString *partType;
@property (copy, nonatomic) NSString *partName;
@property (copy, nonatomic) NSString *partSymbol;
@property (nonatomic) BOOL isPrimary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
