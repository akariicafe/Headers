@class NSString, NSArray, NSDate;

@interface HMCameraSnapshot : HMCameraSource <HMFObject>

@property BOOL didFillSlot;
@property (readonly, copy, nonatomic) NSDate *captureDate;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_releaseSlotIdentifier;
- (void)fillSlotWithCompletionHandler:(id /* block */)a0;
- (id)initWithProfileUniqueIdentifier:(id)a0 slotIdentifier:(id)a1 aspectRatio:(id)a2 captureDate:(id)a3;

@end
