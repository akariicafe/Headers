@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToContext:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithEnumerationOptions:(id)a0;

@end
