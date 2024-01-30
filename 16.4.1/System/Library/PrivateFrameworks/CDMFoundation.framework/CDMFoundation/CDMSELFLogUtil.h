@interface CDMSELFLogUtil : NSObject

+ (BOOL)cdmAssetSetupFailed:(id)a0 contextId:(id)a1 errorDomain:(int)a2 errorCode:(unsigned int)a3 logMessage:(id)a4;
+ (BOOL)cdmStarted:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmClientSetupEnded:(id)a0 logMessage:(id)a1;
+ (BOOL)cdmAllServicesSetupEnded:(id)a0 logMessage:(id)a1;
+ (BOOL)cdmAllServicesSetupFailed:(id)a0 logMessage:(id)a1;
+ (BOOL)cdmAllServicesSetupStarted:(id)a0 logMessage:(id)a1;
+ (BOOL)cdmAssetSetupEnded:(id)a0 contextId:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmAssetSetupStarted:(id)a0 contextId:(id)a1 serviceNames:(id)a2 logMessage:(id)a3;
+ (BOOL)cdmClientSetupFailed:(id)a0 errorDomain:(int)a1 errorCode:(unsigned int)a2 logMessage:(id)a3;
+ (BOOL)cdmClientSetupStarted:(id)a0 logMessage:(id)a1;
+ (BOOL)cdmEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2 machAbsoluteTime:(unsigned long long)a3;
+ (BOOL)cdmFailed:(int)a0 errorDomainString:(id)a1 errorCode:(int)a2 metadata:(id)a3 logMessage:(id)a4;
+ (BOOL)cdmFailed:(int)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmSetupMissingAssetsDetected:(id)a0 contextId:(id)a1 serviceNames:(id)a2 logMessage:(id)a3;
+ (BOOL)cdmSingleServiceSetupAttemptEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmSingleServiceSetupAttemptFailed:(int)a0 retryNumber:(unsigned int)a1 reason:(int)a2 errorCode:(unsigned int)a3 metadata:(id)a4 logMessage:(id)a5;
+ (BOOL)cdmSingleServiceSetupAttemptStarted:(id)a0 serviceType:(int)a1 retryNumber:(unsigned int)a2 metadata:(id)a3 logMessage:(id)a4;
+ (BOOL)cdmSpanMatcherEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmSpanMatcherStarted:(id)a0 matcherName:(int)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)cdmStarted:(id)a0 metadata:(id)a1 logMessage:(id)a2 machAbsoluteTime:(unsigned long long)a3;
+ (BOOL)cdmXpcProcessingEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmXpcProcessingFailed:(id)a0 reason:(int)a1 errorCode:(unsigned int)a2 metadata:(id)a3 logMessage:(id)a4;
+ (BOOL)cdmXpcProcessingStarted:(id)a0 processingType:(int)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)contextUpdateEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (id)createSELFMetadataWithNlId:(id)a0 andWithResultCandidateId:(id)a1 andWithConnectionId:(id)a2;
+ (BOOL)curareRequestLink:(id)a0 nlId:(id)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)emitCurareContext:(id)a0 metadata:(id)a1;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1 machAbsoluteTime:(unsigned long long)a2;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1 machAbsoluteTime:(unsigned long long)a2 logLevel:(id)a3;
+ (BOOL)emitNLXRequestLink:(id)a0 logMessage:(id)a1;
+ (BOOL)emitRequestLink:(id)a0 metadata:(id)a1;
+ (BOOL)matchingSpanEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)orchestratorRequestLink:(id)a0 nlId:(id)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)serviceEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)serviceEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2 machAbsoluteTime:(unsigned long long)a3;
+ (BOOL)serviceFailed:(id)a0 failureCode:(int)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)serviceStarted:(id)a0 serviceName:(int)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)serviceStarted:(id)a0 serviceName:(int)a1 metadata:(id)a2 logMessage:(id)a3 machAbsoluteTime:(unsigned long long)a4;
+ (int)stringNodeNameToEnum:(id)a0;
+ (int)stringServiceTypeToEnum:(id)a0;
+ (BOOL)tokenizationEnded:(id)a0 inputType:(int)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)tokenizationEndedWithMultiResponses:(id)a0 inputType:(int)a1 metadata:(id)a2 logMessage:(id)a3;

@end
