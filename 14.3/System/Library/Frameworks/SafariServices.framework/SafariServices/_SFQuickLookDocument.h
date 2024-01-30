@class LSDocumentProxy, NSString, NSURL;
@protocol _SFQuickLookDocumentSource;

@interface _SFQuickLookDocument : NSObject {
    BOOL _shouldDeleteSavedPath;
    BOOL _shouldDeleteSavedPathWithProperExtension;
}

@property (retain, nonatomic) LSDocumentProxy *documentProxy;
@property (copy, nonatomic) NSString *savedPath;
@property (copy, nonatomic) NSString *savedPathWithProperExtension;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *uti;
@property (readonly, nonatomic) BOOL needsQuickLookDocumentView;
@property (readonly, copy, nonatomic) NSURL *savedURLWithProperExtension;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, copy, nonatomic) NSString *inferredUTI;
@property (readonly, copy, nonatomic) NSString *localizedType;
@property (retain, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) BOOL shouldUnzipByUIDocumentInteractionController;
@property (weak, nonatomic) id<_SFQuickLookDocumentSource> documentSource;

+ (BOOL)_hasSuitableApplicationForOpeningDocument:(id)a0;

- (id)initWithFileName:(id)a0 mimeType:(id)a1 uti:(id)a2 needsQuickLookDocumentView:(BOOL)a3;
- (void)saveToFileIfNeeded;
- (void).cxx_destruct;
- (void)_deleteSavedPathIfNecessary;
- (void)_deleteSavedPathWithProperExtensionIfNecessary;
- (void)setSavedPathWithProperExtension:(id)a0 shouldDelete:(BOOL)a1;
- (void)setFileNameForPDFDocument:(id)a0;
- (void)dealloc;
- (void)addQuickLookPrintSettingsToPrintInfo:(id)a0;
- (void)setSavedPath:(id)a0 shouldDelete:(BOOL)a1;

@end
