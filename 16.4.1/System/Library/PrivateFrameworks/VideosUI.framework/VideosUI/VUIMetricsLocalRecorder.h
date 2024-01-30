@interface VUIMetricsLocalRecorder : NSObject {
    void /* unknown type, empty encoding */ storageManager;
    void /* unknown type, empty encoding */ currentSession;
}

- (id)initWithStorageManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)recordPagePerfRenderEventWithVuiDictionary:(id)a0;

@end
