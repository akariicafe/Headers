@class HMService, HMRoom, HMZone, BMHomeKitClientAccessoryControlStream, HMAccessory, NSObject, HMHome;
@protocol OS_dispatch_queue;

@interface HFBiomeAbstractFetchRequest : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) BMHomeKitClientAccessoryControlStream *accessoryControlStream;
@property (readonly) HMHome *home;
@property (retain) HMRoom *room;
@property (retain) HMZone *zone;
@property (retain) HMAccessory *accessory;
@property (retain) HMService *service;

- (id)init;
- (id)fetch;
- (void).cxx_destruct;
- (id)successHandler;
- (id)initWithHome:(id)a0;
- (void)_fetchWithPromise:(id)a0;
- (void)eventHandler:(id)a0;
- (BOOL)publisherFilter:(id)a0;

@end
