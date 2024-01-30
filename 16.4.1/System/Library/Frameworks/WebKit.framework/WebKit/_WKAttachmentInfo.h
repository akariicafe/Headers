@class NSString, NSData, NSFileWrapper;

@interface _WKAttachmentInfo : NSObject {
    struct RefPtr<const API::Attachment, WTF::RawPtrTraits<const API::Attachment>, WTF::DefaultRefDerefTraits<const API::Attachment>> { struct Attachment *m_ptr; } _attachment;
    struct RetainPtr<NSString> { void *m_ptr; } _mimeType;
    struct RetainPtr<NSString> { void *m_ptr; } _utiType;
    struct RetainPtr<NSString> { void *m_ptr; } _filePath;
}

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSFileWrapper *fileWrapper;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAttachment:(const void *)a0;

@end
