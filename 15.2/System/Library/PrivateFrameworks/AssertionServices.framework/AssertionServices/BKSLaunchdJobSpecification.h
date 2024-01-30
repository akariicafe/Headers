@class NSString, NSArray, NSDictionary;

@interface BKSLaunchdJobSpecification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *labelPrefix;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *executablePath;
@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSArray *machServices;
@property (copy, nonatomic) NSDictionary *environment;
@property (copy, nonatomic) NSString *managedPersona;
@property (copy, nonatomic) NSString *standardOutput;
@property (copy, nonatomic) NSString *standardError;
@property (nonatomic) unsigned long long executionOptions;

+ (id)specification;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
