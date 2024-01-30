@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic) double fractionCompleted;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithState:(unsigned long long)a0 phase:(unsigned long long)a1 fractionCompleted:(double)a2;

@end
