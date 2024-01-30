@class NSString;

@interface DOMNodeFilter : DOMObject <DOMNodeFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (short)acceptNode:(id)a0;

@end
