@class NSString;

@interface APEndpointManagerCarPlayDelegate : NSObject <APCarPlayPolicyMonitorDelegate, APCarPlayPreferencesDelegate> {
    struct OpaqueFigCFWeakReferenceHolder { } *_weakManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
