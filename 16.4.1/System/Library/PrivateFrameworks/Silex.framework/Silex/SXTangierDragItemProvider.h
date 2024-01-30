@class NSString;

@interface SXTangierDragItemProvider : NSObject <SXTangierDragItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragItemForSmartField:(id)a0 interaction:(id)a1 session:(id)a2;
- (BOOL)session:(id)a0 containsURL:(id)a1;

@end
