@class NSString, TSUZipFileWriter;

@interface TSPPackageWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    TSUZipFileWriter *_archiveWriter;
    _Atomic BOOL _isClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
