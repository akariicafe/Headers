@class NSArray;

@interface SFSSAudioDataWrapper : NSObject

@property (weak, nonatomic) NSArray *audioChunks;
@property (nonatomic) long long index;

- (void).cxx_destruct;
- (id)initWithAudioChunks:(id)a0;

@end
