@class NSString, NSURL, TSUFileIOChannel;

@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel> {
    NSURL *_URL;
    id /* block */ _handler;
    TSUFileIOChannel *_writeChannel;
    BOOL _isClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
