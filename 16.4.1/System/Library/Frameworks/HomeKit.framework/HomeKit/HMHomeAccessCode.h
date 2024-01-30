@class NSString, NSArray, HMAccessCodeUserInformation, HMAccessCodeValue;

@interface HMHomeAccessCode : NSObject <HMFObject>

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) HMAccessCodeUserInformation *userInformation;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)homeAccessCodeWithValue:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (id)createHomeAccessCodeValue;
- (id)initWithAccessCodeValue:(id)a0 userInformation:(id)a1;

@end
