@class NSString, NSArray, NSExtensionItem;

@interface MTSDeviceSetupExtensionMessage : NSObject <HMFLogging, HMFObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSExtensionItem *extensionItemRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)messageWithExtensionItemRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
