@class PKRecognitionSessionManager, NSMutableDictionary;

@interface PKRecognitionQueryController : NSObject {
    NSMutableDictionary *_drawingQueries;
    NSMutableDictionary *_visibleStrokeQueries;
    NSMutableDictionary *_queriesToCreate;
    NSMutableDictionary *_suffixes;
    PKRecognitionSessionManager *_recognitionManager;
}

- (void).cxx_destruct;

@end
