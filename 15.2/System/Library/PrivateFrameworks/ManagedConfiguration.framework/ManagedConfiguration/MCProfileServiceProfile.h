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

- (id)serializedDictionary;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 signerCerts:(id)a1 allowEmptyPayload:(BOOL)a2 outError:(id *)a3;
- (id)managedPayloads;
- (id)localizedPayloadSummaryByType;
- (id)localizedManagedPayloadSummaryByType;
- (id)_badDataTypeErrorWithFieldName:(id)a0;
- (id)_unsupportedValueErrorWithFieldName:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)payloads;

@end
