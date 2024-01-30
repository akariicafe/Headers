@class IKUpdateServiceRequest, IKViewElement, NSDictionary, NSString;

@interface VUIAppDocumentManualUpdateContext : NSObject <VUIAppDocumentUpdateContext>

@property (retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest;
@property (retain, nonatomic) NSDictionary *contextDictionary;
@property (weak, nonatomic) IKViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContextDictionary:(id)a0 viewElement:(id)a1;
- (void)updateCurrentUpdateRequestWithAppContext:(id)a0 documentRef:(id)a1;
- (void)updateRequestCompletedWithViewElements:(id)a0 documentRef:(id)a1;

@end
