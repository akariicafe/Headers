@class NSUUID, NSString, _HMContext;

@interface HMAccessorySetupManager : NSObject <HMFLogging> {
    _HMContext *_context;
}

@property (class, readonly, copy) NSUUID *UUID;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
