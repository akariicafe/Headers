@class NSString, NSURL, NSFileHandle, NSObject, NSError;
@protocol OS_dispatch_queue;

@interface CSSiriAudioFileWriter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _type;
    NSURL *_url;
    NSString *_path;
    struct OpaqueExtAudioFile { } *_audioFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    NSFileHandle *_fileHandle;
    NSError *_underlyingError;
}

+ (id)_generateTemporaryFileURL;
+ (id)_savedAudioFilesDirectory;

- (void)_close;
- (void)flushWithCompletion:(id /* block */)a0;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_delete;
- (void)appendAudioData:(id)a0;
- (id)_initWithType:(long long)a0 pathGenerator:(id /* block */)a1 xorFileHandle:(id)a2 priority:(unsigned int)a3;
- (void)configureWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (id)initWithType:(long long)a0 fileHandle:(id)a1 priority:(unsigned int)a2;
- (id)initWithType:(long long)a0 pathGenerator:(id /* block */)a1 priority:(unsigned int)a2;

@end
