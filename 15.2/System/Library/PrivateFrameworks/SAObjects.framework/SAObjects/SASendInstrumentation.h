@class NSNumber, NSString, NSArray;

@interface SASendInstrumentation : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *eventTransmittedRelativeToBootTimeTimestampNs;
@property (copy, nonatomic) NSString *eventTransmittedTimestampRefId;
@property (copy, nonatomic) NSArray *instrumentationBatch;
@property (copy, nonatomic) NSString *payloadVersion;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sendInstrumentation;
+ (id)sendInstrumentationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
