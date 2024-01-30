@class NSString;
@protocol SXDataTableTextSourceFactory, SXTextComponentLayoutHosting, SXDataRecordValueTransformerFactory, SXDOMObjectProviding;

@interface SXDataTableComponentSizerFactory : NSObject <SXComponentSizerFactory>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;
@property (readonly, nonatomic) id<SXDataTableTextSourceFactory> textSourceFactory;
@property (readonly, nonatomic) id<SXDataRecordValueTransformerFactory> recordValueTransformerFactory;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sizerForComponent:(id)a0 componentLayout:(id)a1 layoutOptions:(id)a2 DOMObjectProvider:(id)a3;
- (id)initWithDOMObjectProvider:(id)a0 textComponentLayoutHosting:(id)a1 textSourceFactory:(id)a2 recordValueTransformerFactory:(id)a3;

@end
