@class NSDictionary;

@interface HAENSystemSoundPlayer : NSObject {
    NSDictionary *_options;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)playSystemSoundWithEvent:(id)a0 completion:(id /* block */)a1;

@end
