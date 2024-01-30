@class HMHome, HMUser, NSString;
@protocol HFHomeKitObject;

@interface HFUserPhotosLibraryItem : HFItem <HFHomeKitItemProtocol, NSCopying>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMUser *user;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithUser:(id)a0 inHome:(id)a1;

@end
