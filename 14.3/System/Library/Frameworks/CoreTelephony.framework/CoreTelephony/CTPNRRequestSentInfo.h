@class NSString, NSNumber;

@interface CTPNRRequestSentInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSNumber *timeout;

- (id)init;
- (BOOL)isEqualToCTPNRRequestSentInfo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
