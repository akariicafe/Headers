@class NSString, NSFileHandle, NSObject;
@protocol OS_dispatch_queue;

@interface CSUncompressedAudioLogging : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *samplingDate;
@property (retain, nonatomic) NSString *samplingTimestamp;
@property (retain, nonatomic) NSString *samplingTimestampDetail;
@property (retain, nonatomic) NSString *samplingDirectory;
@property (retain, nonatomic) NSString *audioFilePath;
@property (retain, nonatomic) NSString *plistFilePath;
@property (retain, nonatomic) NSFileHandle *audioFileHandle;
@property (retain, nonatomic) NSString *tmpDirectory;
@property (retain, nonatomic) NSString *tmpAudioFilePath;
@property (nonatomic) BOOL isCancelled;

- (void).cxx_destruct;
- (void)_writePlistFile;
- (id)initWithRequestId:(id)a0 languageCode:(id)a1;
- (int)_createFileDescriptor:(id)a0 protectionClass:(int)a1;
- (void)_moveAudioLoggingToCollectionDirectory;
- (BOOL)_prepareFileForLogging;
- (void)_removeTmpAudioFile;
- (BOOL)_setupFilePath;
- (void)appendAudioData:(id)a0;
- (void)cancelAudioLogging;
- (void)endAudioWithCancellation:(BOOL)a0;
- (void)prepareLogging;

@end
