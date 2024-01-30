@class NSArray, NSMutableDictionary;

@interface CLSSceneConfidenceThresholdHelper : NSObject {
    NSArray *_sceneNames;
    unsigned long long _thresholdType;
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _confidenceThresholdBySceneIdentifierBySceneModelIdentifierLock;
}

- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierWithCurationModel:(id)a0;
- (id)initWithSceneNames:(id)a0 thresholdType:(unsigned long long)a1;

@end
