@class NSString;

@interface HMDLogEventContextProvider : HMFObject <HMDLogEventObserver> {
    unsigned long long _activeXPCConnections;
}

@property (readonly, getter=isActive) BOOL active;
@property (readonly) unsigned long long activeXPCConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedEventTypes;
+ (BOOL)isSupportedEvent:(id)a0;

@end
