@class NSSet, NSMutableDictionary, NSDictionary, KVProfile;

@interface CKVEvaluationProfileBuilder : NSObject {
    NSSet *_omitItemTypes;
    KVProfile *_primaryProfile;
    NSMutableDictionary *_companionProfiles;
    NSDictionary *_primaryPriors;
    NSMutableDictionary *_companionPriors;
}

- (id)buildWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_processRawSpeechProfile:(id)a0 rawSpeechProfileMetadata:(id)a1 deviceId:(id)a2 userId:(id)a3 error:(id *)a4;
- (BOOL)addCompanionRawSpeechProfile:(id)a0 rawSpeechProfileMetadata:(id)a1 deviceId:(id)a2 userId:(id)a3 error:(id *)a4;
- (id)initWithOmittedItemTypes:(id)a0;
- (BOOL)setPrimaryRawSpeechProfile:(id)a0 rawSpeechProfileMetadata:(id)a1 error:(id *)a2;

@end
