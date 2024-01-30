@class NSString;
@protocol SXDOMObjectProviding;

@interface SXImageRecordValueTransformer : NSObject <SXDataRecordValueTransformer>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)a0;
- (id)transformValueForRecord:(id)a0 descriptor:(id)a1;

@end
