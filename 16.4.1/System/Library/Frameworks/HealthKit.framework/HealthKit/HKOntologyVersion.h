@class NSString;

@interface HKOntologyVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;

- (void)encodeWithCoder:(id)a0;
- (id)initWithShardEntries:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initEmptyVersion;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEmptyVersion;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
