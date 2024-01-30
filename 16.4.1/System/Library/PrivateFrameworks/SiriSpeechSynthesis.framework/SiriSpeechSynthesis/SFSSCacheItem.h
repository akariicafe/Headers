@class NSString, NSArray;

@interface SFSSCacheItem : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *voiceKey;
@property (readonly, nonatomic) NSString *resourceKey;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (readonly, nonatomic) NSArray *rawAudio;

+ (id)generateCacheKey:(id)a0 text:(id)a1;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 voiceName:(id)a1 voiceKey:(id)a2 resourceKey:(id)a3 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a4 rawAudio:(id)a5;

@end
