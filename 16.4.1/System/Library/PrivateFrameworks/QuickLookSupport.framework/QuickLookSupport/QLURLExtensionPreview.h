@class QLURLHandler, NSArray, UTType;

@interface QLURLExtensionPreview : QLExtensionPreview

@property (retain) UTType *contentType;
@property (retain) QLURLHandler *urlHandler;
@property (retain) NSArray *additionalURLsAccessed;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 contentType:(id)a1;
- (id)initWithURLHandler:(id)a0 contentType:(id)a1;
- (void)updateForExternalResourceAccessWithExtension:(id)a0 context:(id)a1;

@end
