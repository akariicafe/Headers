@class NSUUID, NSString, NSError;

@interface HMDDatabaseCKOperationCompletionEvent : HMDLogEvent <HMDAWDLogEvent>

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSError *error;

@end
