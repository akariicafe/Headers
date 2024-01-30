@class NSUUID, NSString, NSError;

@interface HMDBackingStoreCKOperationZoneCompletionEvent : HMDHMBLogEvent <HMDAWDLogEvent>

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSError *error;

@end
