@class NSString;
@protocol SXDOMObjectProviding, SXEmbedDataProvider;

@interface SXEmbedComponentSizerFactory : NSObject <SXComponentSizerFactory>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) id<SXEmbedDataProvider> embedDataProvider;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sizerForComponent:(id)a0 componentLayout:(id)a1 layoutOptions:(id)a2 DOMObjectProvider:(id)a3;
- (id)initWithDOMObjectProvider:(id)a0 embedDataProvider:(id)a1;

@end
