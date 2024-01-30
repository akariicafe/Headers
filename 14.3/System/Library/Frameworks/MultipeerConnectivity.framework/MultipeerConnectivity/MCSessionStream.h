@class NSString, NSURL, MCResourceDownloader, MCResourceProgressObserver, MCPeerID, NSObject, NSProgress, NSMutableData;
@protocol OS_dispatch_source;

@interface MCSessionStream : NSObject

@property (nonatomic) MCPeerID *peerID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) int state;
@property (nonatomic) int fd;
@property (nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) BOOL sourceSuspended;
@property (retain, nonatomic) NSMutableData *incomingBuffer;
@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) MCResourceProgressObserver *observer;
@property (nonatomic) BOOL progressUnbounded;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) MCResourceDownloader *urlDownloader;

- (void)dealloc;

@end
