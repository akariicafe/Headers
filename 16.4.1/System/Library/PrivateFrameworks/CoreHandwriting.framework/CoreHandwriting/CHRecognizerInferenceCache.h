@class NSMutableDictionary, CHDrawing;

@interface CHRecognizerInferenceCache : NSObject {
    CHDrawing *_lastDrawing;
    NSMutableDictionary *_cachedActivationMatrices;
    NSMutableDictionary *_cachedStrokeEndings;
}

- (void)clearCache;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)cacheActivationMatrix:(id)a0 strokeEndings:(id)a1 drawing:(id)a2 recognitionEngineCachingKey:(id)a3;
- (id)retrieveActivationMatrixForDrawing:(id)a0 recognitionEngineCachingKey:(id)a1 outStrokeEndings:(id *)a2;

@end
