@class NSData;

@interface HMDDataStreamHAPPendingWrite : NSObject

@property (readonly, copy) NSData *data;
@property (readonly) id /* block */ completion;
@property unsigned long long bytesWritten;

- (void).cxx_destruct;
- (BOOL)isComplete;
- (id)initWithData:(id)a0 completion:(id /* block */)a1;
- (id)popNextFrameUpToMaxLength:(unsigned long long)a0;

@end
