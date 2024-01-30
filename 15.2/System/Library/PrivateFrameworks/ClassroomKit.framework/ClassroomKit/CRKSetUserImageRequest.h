@class NSString, NSData, DMFControlGroupIdentifier;

@interface CRKSetUserImageRequest : CATTaskRequest

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSData *userImageData;
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
