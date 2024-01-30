@class NSString;

@interface SXTextTangierTextRep : TSWPRep <SXAXCustomRotorItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)storage;
- (void)dealloc;
- (id)supportedCustomRotors;
- (BOOL)directlyManagesLayerContent;
- (void)didUpdateLayer:(id)a0;
- (Class)wpEditorClass;

@end
