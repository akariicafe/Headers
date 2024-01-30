@interface CDMSELFLogUtil : NSObject

+ (id)extractRequestLinkData:(id)a0;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1 logLevel:(id)a2;
+ (BOOL)emitNLXRequestLink:(id)a0 logMessage:(id)a1;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1;
+ (BOOL)orchestratorRequestLink:(id)a0 nlId:(id)a1 metadata:(id)a2 logMessage:(id)a3;
+ (void)emitCurareContext:(id)a0 metadata:(id)a1;
+ (BOOL)curareRequestLink:(id)a0 nlId:(id)a1 metadata:(id)a2 logMessage:(id)a3;
+ (id)createSELFMetadataWithNlId:(id)a0 andWithResultCandidateId:(id)a1;
+ (BOOL)emitRequestLink:(id)a0 metadata:(id)a1;
+ (BOOL)cdmStarted:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmFailed:(int)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)cdmFailed:(int)a0 originalCode:(long long)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)serviceStarted:(id)a0 serviceName:(int)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)serviceEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)serviceFailed:(id)a0 failureCode:(int)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)matchingSpanEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (BOOL)tokenizationEnded:(id)a0 inputType:(int)a1 metadata:(id)a2 logMessage:(id)a3;
+ (BOOL)contextUpdateEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2;
+ (int)stringNodeNameToEnum:(id)a0;

@end
