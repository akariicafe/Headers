@class NSString, NSData;

@interface SAUserProfileItem : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL activeProfile;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSData *profileImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (id)encodedClassName;

@end
