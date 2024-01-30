@class NSString, NSArray, NSData, NSNumber;

@interface HMCHIPAccessoryOperationalIdentity : NSObject <HMFObject>

@property (readonly, copy) NSData *rootPublicKey;
@property (readonly, copy) NSNumber *nodeID;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

@end
