@class DMFControlGroupIdentifier, NSString, NSArray, NSData, NSDictionary;

@interface CRKShareRequest : CATTaskRequest

@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *targetType;
@property (copy, nonatomic) NSString *targetIdentifier;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *shareDescription;
@property (retain, nonatomic) NSData *previewImageData;
@property (retain, nonatomic) NSDictionary *sandboxExtensions;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
