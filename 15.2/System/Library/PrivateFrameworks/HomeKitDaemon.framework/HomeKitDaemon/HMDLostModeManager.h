@class NSString;
@protocol HMFLocking;

@interface HMDLostModeManager : HMFObject <HMFLogging> {
    id<HMFLocking> _lock;
    BOOL _lost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isLost) BOOL lost;

+ (id)logCategory;
+ (id)sharedManager;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)init;

@end
