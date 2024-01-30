@class NSString;
@protocol SXDOMObjectProviding;

@interface SXDataRecordValueTransformerFactory : NSObject <SXDataRecordValueTransformerFactory>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)a0;
- (id)recordValueTransformerForDataDescriptor:(id)a0;

@end
