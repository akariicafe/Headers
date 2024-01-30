@class NSString;

@interface CKVSpanMatchPassthroughFilter : NSObject <CKVSpanMatchResultInterpreter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interpretSpanMatchResults:(id)a0 ofTokenChain:(id)a1;

@end
