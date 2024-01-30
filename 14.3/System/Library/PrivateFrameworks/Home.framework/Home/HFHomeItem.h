@class HMHome, NSString;
@protocol HFHomeKitObject;

@interface HFHomeItem : HFItem <HFHomeKitItemProtocol, NSCopying>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
