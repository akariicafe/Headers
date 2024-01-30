@class NSMutableSet;
@protocol BSInvalidatable;

@interface SBDisplayTransformerRegistry : NSObject <FBSDisplayTransformer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_lock_transformers;
    id<BSInvalidatable> _stateCaptureToken;
}

+ (id)sharedInstance;

- (id)transformDisplayConfiguration:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (id)_lock_description;
- (id)addTransformer:(id)a0 withIdentifier:(id)a1;
- (void).cxx_destruct;

@end
