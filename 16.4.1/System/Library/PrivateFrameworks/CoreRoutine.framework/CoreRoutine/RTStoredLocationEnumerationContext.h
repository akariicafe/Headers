@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;
- (id)init;
- (BOOL)isEqualToContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEnumerationOptions:(id)a0;

@end
