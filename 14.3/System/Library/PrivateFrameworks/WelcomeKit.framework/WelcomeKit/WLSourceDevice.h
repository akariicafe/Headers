@class NSString, NSArray;

@interface WLSourceDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) unsigned short socketPort;
@property (nonatomic) unsigned short httpPort;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (nonatomic) BOOL isLocal;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *osAPIVersion;
@property (copy, nonatomic) NSString *hardwareBrand;
@property (copy, nonatomic) NSString *hardwareModel;
@property (copy, nonatomic) NSString *hardwareDesign;
@property (copy, nonatomic) NSString *hardwareMaker;
@property (copy, nonatomic) NSString *hardwareProduct;
@property (copy, nonatomic) NSArray *specifiers;
@property (nonatomic) BOOL supportsFileLength;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
