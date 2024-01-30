@class NSArray, NSString;

@interface SPRInstallData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *kernelsInstalled;
@property (readonly, copy, nonatomic) NSString *countryCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKernelsInstalled:(id)a0;
- (id)initWithKernelsInstalled:(id)a0 countryCode:(id)a1;

@end
