@class NSURL, NSDictionary, NSMutableDictionary;

@interface DYFSStreamerService : NSObject <DYFSStreamerService> {
    struct DYFSStreamer { NSURL *url; NSDictionary *directoryAttributes; NSMutableDictionary *fileHandles; unsigned int ownerUID; char _padding[4]; } _fs_streamer;
}

- (void).cxx_destruct;
- (void)finishedSending;
- (void)initializeTransfer;
- (void)itemData:(id)a0 attributes:(id)a1;
- (void)streamAbort;

@end
