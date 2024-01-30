@class NSSet, NSString, HMSoftwareUpdate;
@protocol HFHomeKitObject;

@interface HUSoftwareUpdateInfoItem : HFItem <HFHomeKitItemProtocol>

@property (readonly, nonatomic) NSSet *accessories;
@property (readonly, nonatomic) HMSoftwareUpdate *softwareUpdate;
@property (readonly, nonatomic) NSString *publisher;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateFormatter;

- (id)initWithAccessories:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSoftwareUpdate:(id)a0 publisher:(id)a1;

@end
