@class NSArray, NSString;

@interface DKCanonicalVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *parts;
@property (readonly, nonatomic) NSString *string;

+ (id)canonicalVersionWithString:(id)a0;

- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNewerThan:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_parseParts:(id)a0;
- (BOOL)isEqualToCanonicalVersion:(id)a0;

@end
