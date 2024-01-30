@class NSDictionary;

@interface HAENSystemSoundPlayer : NSObject {
    NSDictionary *_options;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)playSystemSoundWithEvent:(id)a0 completion:(id /* block */)a1;

@end
