@class NSString, NSArray, NSDictionary;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *endpoint;
@property (copy, nonatomic) NSArray *featuresAtEndpoint;
@property (copy, nonatomic) NSArray *orderedContext;
@property (nonatomic) long long packetCount;
@property (copy, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (nonatomic) double totalAudioRecorded;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finishSpeech;
+ (id)finishSpeechWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
