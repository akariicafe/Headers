@class NSString, SBSServiceFacilityClient, NSObject;
@protocol OS_dispatch_queue;

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable> {
    SBSServiceFacilityClient *_client;
}

@property (readonly, nonatomic) SBSServiceFacilityClient *client;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)serviceFacilityClientClass;

@end
