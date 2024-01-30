@class NSDictionary;

@interface HAENSystemSoundPlayer : NSObject {
    NSDictionary *_options;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)playSystemSoundWithEvent:(id)a0 completion:(id /* block */)a1;

@end
