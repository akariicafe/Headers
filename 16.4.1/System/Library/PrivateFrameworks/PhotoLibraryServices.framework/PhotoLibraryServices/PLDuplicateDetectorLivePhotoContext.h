@class NSMutableDictionary;

@interface PLDuplicateDetectorLivePhotoContext : NSObject {
    NSMutableDictionary *_container;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addFingerprint:(id)a0 contextData:(id)a1;
- (BOOL)hasFingerprint:(id)a0 contextData:(id)a1;

@end
