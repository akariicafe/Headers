@interface SiriInference.ProcessUnstitchedIntents : SiriInference.XPCActivityOperation {
    void /* unknown type, empty encoding */ stitchingSucceeded;
    void /* unknown type, empty encoding */ stitchingSkipped;
    void /* unknown type, empty encoding */ stitchingFailed;
}

- (void)main;
- (id)init;

@end
