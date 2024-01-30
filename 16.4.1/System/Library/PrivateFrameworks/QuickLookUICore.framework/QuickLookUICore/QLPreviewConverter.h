@class NSURL, NSString, NSURLResponse, QLPreviewConverterParts, NSDictionary, NSURLRequest, NSObject;
@protocol OS_dispatch_io;

@interface QLPreviewConverter : NSObject {
    QLPreviewConverterParts *_previewParts;
    NSDictionary *_options;
    NSObject<OS_dispatch_io> *_io_write;
    NSURL *_tmpFileURL;
    long long _totalWrittenBytes;
    BOOL _dataPhaseFinished;
    BOOL _dataGatheringSucceeded;
}

@property (readonly, nonatomic) NSString *previewFileName;
@property (readonly, nonatomic) NSString *previewUTI;
@property (readonly, nonatomic) NSURLRequest *previewRequest;
@property (readonly, nonatomic) NSURLResponse *previewResponse;
@property (readonly, nonatomic) QLPreviewConverterParts *previewParts;

+ (BOOL)isIWorkDocumentType:(id)a0;
+ (BOOL)isSpreadSheetDocumentType:(id)a0;
+ (id)_iWorkMIMETypes;
+ (id)convertibleUTIs;
+ (id)_csvMIMETypes;
+ (id)_csvUTIs;
+ (id)_iWorkUTIs;
+ (id)_lpdfUTIs;
+ (id)_officeMIMETypes;
+ (id)_officeUTIs;
+ (id)_rtfMIMETypes;
+ (id)_rtfUTIs;
+ (id)_spreadSheetMIMETypes;
+ (id)_spreadSheetUTIs;
+ (BOOL)canConvertDocumentType:(id)a0;
+ (id)convertibleMIMETypes;
+ (id)convertibleTypes;
+ (BOOL)isCSVDocumentType:(id)a0;
+ (BOOL)isLPDFDocumentType:(id)a0;
+ (BOOL)isOfficeDocumentType:(id)a0;
+ (BOOL)isRTFDocumentType:(id)a0;
+ (BOOL)isSafeRequest:(id)a0;
+ (BOOL)isSafeURL:(id)a0;

- (void)_register;
- (void)appendData:(id)a0;
- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)finishConverting;
- (void)finishedAppendingData;
- (id)initWithConnection:(id)a0 delegate:(id)a1 response:(id)a2 options:(id)a3;
- (id)initWithData:(id)a0 name:(id)a1 uti:(id)a2 options:(id)a3;
- (id)safeRequestForRequest:(id)a0;
- (void)_closeIOCahnnel;
- (void)_createDispatchIOChannel;
- (void)_writeDataArrayIntoStream:(id)a0;
- (void)appendDataArray:(id)a0;
- (BOOL)htmlErrorDisabled;
- (id)initWithURL:(id)a0 uti:(id)a1 options:(id)a2;
- (BOOL)isComputed;
- (void)setHtmlErrorDisabled:(BOOL)a0;

@end
