@class NSString, NSUUID, _HMDAccountIdentifier, NSArray;

@interface HMDAccountIdentifier : HMFObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) _HMDAccountIdentifier *internal;
@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly, copy) NSString *senderCorrelationIdentifier;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountIdentifierForAccountHandle:(id)a0;
+ (id)accountIdentifierForAppleAccountContext:(id)a0;
+ (id)accountIdentifierForMessageContext:(id)a0;
+ (id)accountIdentifierForSenderCorrelationIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithInternal:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateAppleAccountSenderCorrelationIdentifier:(id)a0;

@end
