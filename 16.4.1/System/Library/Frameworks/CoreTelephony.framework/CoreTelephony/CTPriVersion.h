@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *majorVersion;
@property (retain, nonatomic) NSNumber *minorVersion;
@property (retain, nonatomic) NSNumber *releaseVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
