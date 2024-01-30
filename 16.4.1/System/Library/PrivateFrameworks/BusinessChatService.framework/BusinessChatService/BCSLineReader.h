@class NSString, NSURL, NSMutableData, NSInputStream;

@interface BCSLineReader : NSObject <BCSLineReading>

@property (readonly, copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSMutableData *readBuffer;
@property (nonatomic) char *endBuffer;
@property (nonatomic) char *beginLine;
@property (nonatomic) char *endLine;
@property (readonly, nonatomic) NSMutableData *lineBuffer;
@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) unsigned long long maxLineSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFileURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasValidURL;
- (id)initWithFileURL:(id)a0 bufferSize:(unsigned long long)a1 maxLineSize:(unsigned long long)a2;
- (id)readLine;
- (void)refillReadBuffer;

@end
