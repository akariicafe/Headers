@class DMFControlSessionIdentifier, NSString, NSData;

@interface CRKInstructor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) DMFControlSessionIdentifier *sessionIdentifier;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *courseName;
@property (retain, nonatomic) NSData *imageData;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToInstructor:(id)a0;

@end
