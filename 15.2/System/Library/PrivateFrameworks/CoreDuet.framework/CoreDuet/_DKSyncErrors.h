@interface _DKSyncErrors : NSObject

+ (id)disabled;
+ (id)unavailableForCurrentUser;
+ (id)failedToFetchChanges;
+ (id)invalidResponse;
+ (id)couldNotSaveForSync;
+ (id)failedToApplyRemoteChanges;
+ (id)missingHighWaterMark;
+ (id)temporaryFailure;
+ (id)domain;
+ (id)internalFailure;
+ (id)invalidRequest;
+ (id)invalidData;

@end
