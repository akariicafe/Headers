@class AVAsset, NSArray, RCPEventStream, UIImage, NSObject;
@protocol OS_dispatch_queue;

@interface RCPMovie : NSObject {
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

@property (retain, nonatomic) RCPEventStream *eventStream;
@property (retain, nonatomic) AVAsset *screenRecording;
@property (retain, nonatomic) NSArray *snapshots;
@property (retain, nonatomic) UIImage *screenshot;
@property (nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) unsigned long long startTimestamp;
@property (readonly, nonatomic) unsigned long long endTimestamp;

+ (struct __CVBuffer { } *)pixelBufferFromUIImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2;

- (id)initWithContentsOfURL:(id)a0;
- (id)trimmedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)encodeToXPC;
- (id)initWithEventStream:(id)a0 snapshots:(id)a1;
- (id)initWithXPC:(id)a0;
- (void)writeToURL:(id)a0 completion:(id /* block */)a1;

@end
