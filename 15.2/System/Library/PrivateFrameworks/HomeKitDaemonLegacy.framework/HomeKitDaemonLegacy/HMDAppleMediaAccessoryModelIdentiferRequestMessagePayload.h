@class NSString;

@interface HMDAppleMediaAccessoryModelIdentiferRequestMessagePayload : HMFObject <HMFLogging, HMMessageEncoding>

@property (class, readonly, copy) NSString *messageName;

@property (readonly, copy) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)payloadCopy;
- (id)initWithAccessoryIdentifier:(id)a0;

@end
