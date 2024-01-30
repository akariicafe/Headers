@class NSString, EFSandboxedURLWrapper, NSData, NSItemProvider, NSURL;

@interface MFMailComposeAttachmentWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) EFSandboxedURLWrapper *fileURLWrapper;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSURL *fileURL;

+ (id)wrapperWithFileURL:(id)a0 mimeType:(id)a1;
+ (id)wrapperWithData:(id)a0 mimeType:(id)a1 fileName:(id)a2;
+ (id)wrapperWithItemProvider:(id)a0 mimeType:(id)a1 fileName:(id)a2;

- (unsigned long long)fileSize;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0 mimeType:(id)a1;
- (id)initWithData:(id)a0 mimeType:(id)a1 fileName:(id)a2;
- (id)initWithItemProvider:(id)a0 mimeType:(id)a1 fileName:(id)a2;

@end
