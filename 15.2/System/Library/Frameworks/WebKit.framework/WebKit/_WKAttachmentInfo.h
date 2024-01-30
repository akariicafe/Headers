@class NSString, NSData, NSFileWrapper;

@interface _WKAttachmentInfo : NSObject {
    struct RetainPtr<NSFileWrapper> { void *m_ptr; } _fileWrapper;
    struct RetainPtr<NSString> { void *m_ptr; } _mimeType;
    struct RetainPtr<NSString> { void *m_ptr; } _utiType;
    struct RetainPtr<NSString> { void *m_ptr; } _filePath;
}

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSFileWrapper *fileWrapper;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFileWrapper:(id)a0 filePath:(id)a1 mimeType:(id)a2 utiType:(id)a3;

@end
