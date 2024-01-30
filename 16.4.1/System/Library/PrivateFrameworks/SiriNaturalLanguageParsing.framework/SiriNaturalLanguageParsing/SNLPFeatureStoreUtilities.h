@interface SNLPFeatureStoreUtilities : NSObject

+ (BOOL)insertToFeatureStoreWithNLv4SpanResponse:(id)a0 interactionIdentifier:(id)a1;
+ (BOOL)_insertToFeatureStoreWithJSONString:(id)a0 interactionIdentifier:(id)a1 streamIdentifier:(id)a2;
+ (BOOL)_insertToFeatureStoreWithProtobufObject:(id)a0 interactionIdentifier:(id)a1 streamIdentifier:(id)a2;
+ (id)_jsonStringFromProtobufObject:(id)a0;
+ (BOOL)insertToFeatureStoreWithITFMAssertVersion:(id)a0 interactionIdentifier:(id)a1 itfmModelType:(unsigned long long)a2;
+ (BOOL)insertToFeatureStoreWithITFMContextResponse:(id)a0 interactionIdentifier:(id)a1 itfmModelType:(unsigned long long)a2;
+ (BOOL)insertToFeatureStoreWithITFMExecutedHandcraftedRules:(id)a0 interactionIdentifier:(id)a1 itfmModelType:(unsigned long long)a2;
+ (BOOL)insertToFeatureStoreWithITFMSpanResponse:(id)a0 interactionIdentifier:(id)a1 itfmModelType:(unsigned long long)a2;
+ (BOOL)insertToFeatureStoreWithNLv4AssertVersion:(id)a0 interactionIdentifier:(id)a1;
+ (BOOL)insertToFeatureStoreWithNLv4ContextResponse:(id)a0 interactionIdentifier:(id)a1;
+ (BOOL)insertToFeatureStoreWithNLv4ExecutedHandcraftedRules:(id)a0 interactionIdentifier:(id)a1;
+ (unsigned long long)itfmModelTypeForSNLPComponent:(const int *)a0;

@end
