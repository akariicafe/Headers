@class NSString;

@interface VSAudioPreviewDelegate : NSObject <AVAudioPlayerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
