@class NSURL, NSString;

@interface AXMSoundOutputAction : AXMOutputAction {
    NSString *_soundID;
    NSURL *_soundFileURL;
}

@property (readonly, nonatomic) NSURL *soundFileURL;
@property (readonly, nonatomic) NSString *soundID;

+ (id)_soundFileURLForSoundID:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_initWithSoundID:(id)a0 handle:(id)a1;
- (id)_initWithURL:(id)a0 handle:(id)a1;
- (id)initWithSoundID:(id)a0;

@end
