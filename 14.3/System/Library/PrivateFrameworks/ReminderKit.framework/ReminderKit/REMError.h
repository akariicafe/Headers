@interface REMError : NSObject

+ (id)noSuchObjectErrorWithObjectID:(id)a0;
+ (id)unexpectedError;
+ (id)noSuchObjectErrorWithExternalIdentifier:(id)a0;
+ (id)noSuchObjectErrorWithDACalendarItemUniqueIdentifier:(id)a0;
+ (id)_errorSanitizedForXPCFromError:(id)a0;
+ (BOOL)_isCoreDataError:(id)a0;
+ (id)_errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorSanitizedForXPCFromError:(id)a0;
+ (id)mismatchedObjectIDWithObjectID:(id)a0 expected:(Class)a1;
+ (id)unexpectedNilPropertyWithClass:(Class)a0 property:(id)a1;
+ (id)unauthorizedErrorWithMissingEntitlement:(id)a0;
+ (id)unauthorizedErrorWithMissingEntitlement:(id)a0 requestedAccessLevel:(id)a1 currentAccesslevel:(id)a2;
+ (id)throttledErrorWithRemainingTimeInterval:(double)a0;
+ (id)babySatErrorWithOperationName:(id)a0;
+ (id)retryLaterErrorWithInterval:(double)a0;
+ (BOOL)isNoSuchObjectError:(id)a0 forObjectID:(id)a1;
+ (id)saveErrorWithCoreDataError:(id)a0;
+ (id)noSuchSmartListErrorWithSmartListTag:(id)a0;
+ (id)validationErrorMoveFromAccount:(id)a0 toAccout:(id)a1;
+ (id)validationErrorListHasNoAccount:(id)a0;
+ (id)validationErrorMoveReminderFromList:(id)a0 toList:(id)a1 inAccount:(id)a2;
+ (id)validationErrorNestedSubtask:(id)a0 parentReminderID:(id)a1;
+ (id)validationErrorSubtaskAndParentNotOnSameList:(id)a0 parentReminderID:(id)a1;
+ (id)constraintConflictWithIdentifier:(id)a0 constraint:(id)a1;
+ (id)nullifiedRelationshipErrorWithRelationshipName:(id)a0;
+ (id)xpcPerformerUnavailableErrorWithDescription:(id)a0;
+ (id)errorFromErrors:(id)a0;
+ (id)internalErrorWithDebugDescription:(id)a0;
+ (id)invalidParameterErrorWithDescription:(id)a0;
+ (id)cancelledError;

@end
