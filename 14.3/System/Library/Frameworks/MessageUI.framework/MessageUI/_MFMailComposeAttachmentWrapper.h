@class NSString, NSItemProvider, NSData, NSURL;

@interface _MFMailComposeAttachmentWrapper : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSItemProvider *itemProvider;

+ (id)wrapperWithFileURL:(id)a0 mimeType:(id)a1;
+ (id)wrapperWithData:(id)a0 mimeType:(id)a1 fileName:(id)a2;
+ (id)wrapperWithItemProvider:(id)a0 mimeType:(id)a1 fileName:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)fileSize;
- (id)initWithFileURL:(id)a0 mimeType:(id)a1;
- (id)initWithData:(id)a0 mimeType:(id)a1 fileName:(id)a2;
- (id)initWithItemProvider:(id)a0 mimeType:(id)a1 fileName:(id)a2;

@end
