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

+ (id)_rtfUTIs;
+ (id)_csvUTIs;
+ (BOOL)isIWorkDocumentType:(id)a0;
+ (BOOL)isSpreadSheetDocumentType:(id)a0;
+ (id)_officeMIMETypes;
+ (id)_iWorkMIMETypes;
+ (id)_rtfMIMETypes;
+ (id)_csvMIMETypes;
+ (id)_spreadSheetMIMETypes;
+ (id)_officeUTIs;
+ (id)_iWorkUTIs;
+ (id)_lpdfUTIs;
+ (id)_spreadSheetUTIs;
+ (id)convertibleUTIs;
+ (BOOL)canConvertDocumentType:(id)a0;
+ (BOOL)isSafeURL:(id)a0;
+ (id)convertibleMIMETypes;
+ (id)convertibleTypes;
+ (BOOL)isOfficeDocumentType:(id)a0;
+ (BOOL)isCSVDocumentType:(id)a0;
+ (BOOL)isLPDFDocumentType:(id)a0;
+ (BOOL)isRTFDocumentType:(id)a0;
+ (BOOL)isSafeRequest:(id)a0;

- (void)_register;
- (void)appendData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (id)initWithConnection:(id)a0 delegate:(id)a1 response:(id)a2 options:(id)a3;
- (id)safeRequestForRequest:(id)a0;
- (void)finishedAppendingData;
- (void)finishConverting;
- (id)initWithData:(id)a0 name:(id)a1 uti:(id)a2 options:(id)a3;
- (void)dealloc;
- (void)cancel;
- (void)_closeIOCahnnel;
- (BOOL)isComputed;
- (void)appendDataArray:(id)a0;
- (void)_writeDataArrayIntoStream:(id)a0;
- (void)_createDispatchIOChannel;
- (void)setHtmlErrorDisabled:(BOOL)a0;
- (BOOL)htmlErrorDisabled;
- (id)initWithURL:(id)a0 uti:(id)a1 options:(id)a2;

@end
