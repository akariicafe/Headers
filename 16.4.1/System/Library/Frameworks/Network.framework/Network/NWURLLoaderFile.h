@class NSString, NSURL, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue, OS_dispatch_io;

@interface NWURLLoaderFile : NSObject <NWURLLoader> {
    int _error;
    NSURL *_URL;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _fileSize;
    NSObject<OS_dispatch_io> *_io;
}

@property (readonly, nonatomic) BOOL allowsWrite;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)readResponse:(id /* block */)a0;
- (void)updateClient:(id)a0;
- (void)writeData:(id)a0 complete:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
