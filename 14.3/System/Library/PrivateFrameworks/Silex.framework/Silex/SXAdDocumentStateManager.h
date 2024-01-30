@class NSPointerArray, NSString, SXViewport;

@interface SXAdDocumentStateManager : NSObject <SXViewportChangeListener, SXAdDocumentStateManager>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) NSPointerArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
