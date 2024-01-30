@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long alternativeSelectCount;
@property (nonatomic) long long characterChangeCount;
@property (copy, nonatomic) NSString *correctionSource;
@property (copy, nonatomic) NSString *correctionText;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)speechCorrectionStatistics;
+ (id)speechCorrectionStatisticsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
