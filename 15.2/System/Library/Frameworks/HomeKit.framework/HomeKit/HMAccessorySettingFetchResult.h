@class NSString, NSArray, HMImmutableSetting, NSError;

@interface HMAccessorySettingFetchResult : NSObject <HMFObject>

@property (readonly) long long failureType;
@property (readonly, copy) NSString *keyPath;
@property (readonly) HMImmutableSetting *setting;
@property (readonly, copy) NSError *error;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)fetchResultsWithKeyPaths:(id)a0 failureType:(long long)a1;

@end
