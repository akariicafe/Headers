@interface IMSyncErrorAnalyzer : NSObject

+ (id)sharedInstance;

- (BOOL)CKPartialError:(id)a0 onlyHasErrorCodes:(id)a1;
- (BOOL)CKPartialError:(id)a0 hasErrorCode:(id)a1;
- (id)_errorsFromPartialError:(id)a0;
- (BOOL)_isCKErrorPartialFailure:(id)a0;
- (BOOL)acceptableErrorCodeWhileDeleting:(id)a0;
- (unsigned long long)calculateDelay:(unsigned long long)a0 forAttempt:(unsigned long long)a1 maxInterval:(unsigned long long)a2;
- (BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)a0;
- (BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)a0;
- (BOOL)errorIndicatesIdentityWasLost:(id)a0;
- (BOOL)errorIndicatesMaxAttemptsFailed:(id)a0;
- (BOOL)errorIndicatesQuotaExceeded:(id)a0;
- (BOOL)errorIndicatesUserDeletedZone:(id)a0;
- (BOOL)errorIndicatesZoneNotCreated:(id)a0;
- (id)extractRecordIDsDeletedFromCKPartialError:(id)a0;
- (id)extractRecordIDsNotFoundFromCKPartialError:(id)a0;
- (long long)responseForError:(id)a0 attempt:(unsigned long long)a1 retryInterval:(id *)a2;

@end
