@class QLURLHandler, NSArray;

@interface QLURLExtensionPreview : QLExtensionPreview

@property (retain) QLURLHandler *urlHandler;
@property (retain) NSArray *additionalURLsAccessed;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURLHandler:(id)a0 previewDescription:(id)a1;
- (id)initWithURL:(id)a0 previewDescription:(id)a1;

@end
