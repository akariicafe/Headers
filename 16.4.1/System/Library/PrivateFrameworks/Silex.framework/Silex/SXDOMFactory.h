@class NSString;
@protocol SXDocumentProviding;

@interface SXDOMFactory : NSObject <SXDOMFactory>

@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createDOM;
- (id)initWithDocumentProvider:(id)a0;

@end
