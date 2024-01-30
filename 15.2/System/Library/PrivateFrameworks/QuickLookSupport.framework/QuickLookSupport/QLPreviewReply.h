@class QLTBitmapFormat, NSString, QLURLHandler, NSData, UTType, NSDictionary;

@interface QLPreviewReply : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long replyType;
@property (retain) NSData *data;
@property (retain) UTType *contentType;
@property struct CGSize { double width; double height; } contentSize;
@property (retain) QLURLHandler *fileURLHandler;
@property (retain) QLTBitmapFormat *bitmapFormat;
@property BOOL wantsBorder;
@property (copy, nonatomic) id /* block */ drawInContextBlock;
@property (copy, nonatomic) id /* block */ documentCreationBlock;
@property (copy, nonatomic) id /* block */ dataCreationBlock;
@property unsigned long long stringEncoding;
@property (copy) NSDictionary *attachments;
@property (copy) NSString *title;

- (void)encodeWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)updateWithPDFData:(id)a0;
- (id)updateFromDataCreationBlock;
- (id)drawWithContext:(struct CGContext { } *)a0;
- (void)updateWithImageData:(id)a0 bitmapFormat:(id)a1;
- (id)initWithFileURL:(id)a0 forcedContentType:(id)a1;
- (id)initWithViewControllerOfPreferredContentSize:(struct CGSize { double x0; double x1; })a0 title:(id)a1 wantsBorder:(BOOL)a2;
- (id)initWithContextSize:(struct CGSize { double x0; double x1; })a0 isBitmap:(BOOL)a1 drawingBlock:(id /* block */)a2;
- (id)initForPDFWithPageSize:(struct CGSize { double x0; double x1; })a0 documentCreationBlock:(id /* block */)a1;
- (id)initWithDataOfContentType:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1 dataCreationBlock:(id /* block */)a2;

@end
