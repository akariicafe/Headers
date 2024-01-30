@class NSString, NSData, NSArray;

@interface MCProfileServiceProfile : MCProfile {
    NSArray *_bogusPayloads;
}

@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSData *enrollmentIdentityPersistentID;
@property (readonly, retain, nonatomic) NSArray *deviceAttributes;
@property (readonly, retain, nonatomic) id challenge;
@property (readonly, nonatomic) BOOL confirmInstallation;
@property (readonly, nonatomic) BOOL supportedServerVersion;

- (id)payloads;
- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 signerCerts:(id)a1 allowEmptyPayload:(BOOL)a2 outError:(id *)a3;
- (id)managedPayloads;
- (id)localizedPayloadSummaryByType;
- (id)localizedManagedPayloadSummaryByType;
- (id)_badDataTypeErrorWithFieldName:(id)a0;
- (id)_unsupportedValueErrorWithFieldName:(id)a0 value:(id)a1;
- (id)description;
- (id)serializedDictionary;

@end
