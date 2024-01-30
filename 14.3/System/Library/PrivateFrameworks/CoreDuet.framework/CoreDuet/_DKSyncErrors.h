@interface _DKSyncErrors : NSObject

+ (id)disabled;
+ (id)failedToFetchChanges;
+ (id)unavailableForCurrentUser;
+ (id)couldNotSaveForSync;
+ (id)failedToApplyRemoteChanges;
+ (id)invalidResponse;
+ (id)missingHighWaterMark;
+ (id)temporaryFailure;
+ (id)domain;
+ (id)internalFailure;
+ (id)invalidRequest;
+ (id)invalidData;

@end
