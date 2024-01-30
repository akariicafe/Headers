@class NSString, NSDictionary, NSProgress, NSURL, NSInputStream;
@protocol SYStreamEventHandlerBlocks, SYStreamProgress;

@interface SYInputStreamTransaction : NSObject <SYStreamTransaction> {
    NSURL *_fileURL;
}

@property (readonly, nonatomic) NSInputStream<SYStreamEventHandlerBlocks, SYStreamProgress> *inputStream;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 metadata:(id)a1 decompressedSize:(unsigned long long)a2;

@end
