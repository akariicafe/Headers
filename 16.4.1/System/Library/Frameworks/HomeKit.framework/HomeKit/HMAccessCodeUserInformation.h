@class HMUser, NSString, NSArray, HMRemovedUserInfo;

@interface HMAccessCodeUserInformation : NSObject <HMFObject>

@property (readonly, copy) NSString *simpleLabel;
@property (readonly) HMUser *user;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)userInformationWithValue:(id)a0 home:(id)a1;

- (id)initWithUser:(id)a0;
- (void).cxx_destruct;
- (id)createAccessCodeUserInformationValue;
- (id)initWithRemovedUserInfo:(id)a0;
- (id)initWithSimpleLabel:(id)a0;
- (id)initWithSimpleLabel:(id)a0 user:(id)a1 removedUserInfo:(id)a2;

@end
