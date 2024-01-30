@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;
- (BOOL)isEqualToContext:(id)a0;
- (id)initWithEnumerationOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
