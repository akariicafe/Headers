@class SBMainDisplayConfigurationTransformer;

@interface SBFBSDisplayTransformer : NSObject <FBSDisplayTransformer> {
    SBMainDisplayConfigurationTransformer *_emulatedMainDisplayTransformer;
}

- (id)transformDisplayConfiguration:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
