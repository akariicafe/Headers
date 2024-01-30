@class NSArray, NSMutableString, NSURL, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HDDiagnosticOperationDelegate;

@interface HDDiagnosticOperation : NSOperation {
    NSMutableArray *_attachments;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableString *reportContents;
@property (weak, nonatomic) id<HDDiagnosticOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSURL *attachmentDirectoryURL;
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (readonly, copy) NSArray *attachments;
@property (readonly, copy) NSString *reportFilename;

+ (id)operationWithAttachmentDirectoryURL:(id)a0;

- (void)log:(id)a0;
- (void)run;
- (void)appendNewline;
- (void)main;
- (void).cxx_destruct;
- (id)stringFromDate:(id)a0;
- (void)appendString:(id)a0;
- (void)appendFormat:(id)a0;
- (id)_headerString;
- (id)openReadOnlyDatabaseAtURL:(id)a0;
- (unsigned long long)getFileStatisticsForDirectoryWithURL:(id)a0 earliestModificationDate:(double *)a1 totalFileSize:(long long *)a2 maxFileSize:(long long *)a3;
- (void)appendStrongSeparator;
- (BOOL)copyDatabaseFromURL:(id)a0 toURL:(id)a1;
- (long long)fileSizeForURL:(id)a0;
- (id)prettyPrintFileSize:(long long)a0;
- (id)fileCreationDateForURL:(id)a0;
- (id)fileModificationDateForURL:(id)a0;
- (void)appendSeparator;
- (id)initWithAttachmentDirectoryURL:(id)a0;
- (void)_appendString:(id)a0 newLine:(BOOL)a1;
- (void)_queue_submitAttachment:(id)a0;
- (BOOL)_copyDatabase:(struct sqlite3 { } *)a0 toDatabase:(struct sqlite3 { } *)a1;
- (id)_fileAttributesAtURL:(id)a0;
- (void)submitAttachment:(id)a0;
- (void)submitAttachments:(id)a0;
- (double)absoluteTimeForTimespec:(struct timespec { long long x0; long long x1; })a0;

@end
