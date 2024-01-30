@class NSString, MTLDebugHeap;
@protocol MTLHeap;

@interface MTLDebugResource : NSObject <NSObject> {
    id _parent;
    MTLDebugHeap *_heap;
}

@property (readonly) id baseObject;
@property (readonly) id<MTLHeap> heap;
@property BOOL hasTrackedMakeAliasable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 heap:(id)a2;

@end
