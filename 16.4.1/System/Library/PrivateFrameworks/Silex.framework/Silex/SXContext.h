@class NSString, SXDocumentController;
@protocol SXHost, SXTextContentProvider, SXResourceDataSource;

@interface SXContext : NSObject

@property (readonly, weak, nonatomic) id<SXResourceDataSource> resourceDataSource;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<SXHost> host;
@property (readonly, nonatomic) SXDocumentController *documentController;
@property (readonly, nonatomic) id<SXTextContentProvider> textContentProvider;

+ (void)prewarm;

- (id)initWithIdentifier:(id)a0 shareURL:(id)a1 JSONData:(id)a2 resourceDataSource:(id)a3 host:(id)a4 error:(id *)a5;
- (void).cxx_destruct;

@end
