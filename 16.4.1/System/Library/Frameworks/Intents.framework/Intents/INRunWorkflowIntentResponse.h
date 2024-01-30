@class NSString, NSArray, NSNumber, INArchivedObject;

@interface INRunWorkflowIntentResponse : INIntentResponse <INRunWorkflowIntentResponseExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) INArchivedObject *underlyingIntent;
@property (copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSNumber *waitingForResume;
@property (copy, nonatomic) NSNumber *continueRunning;
@property (copy, nonatomic) NSArray *steps;
@property (copy, nonatomic) NSNumber *requestsIntentExecution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_errorCodeFromCode:(long long)a0;
+ (int)_typeFromCode:(long long)a0;

- (id)initWithBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)propertiesByName;
- (long long)_codeWithName:(id)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (BOOL)_shouldForwardIntentToApp;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (void)setPropertiesByName:(id)a0;

@end
