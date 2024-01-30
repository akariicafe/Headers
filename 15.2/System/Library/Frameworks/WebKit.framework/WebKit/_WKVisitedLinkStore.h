@class NSString;

@interface _WKVisitedLinkStore : NSObject <WKObject> {
    struct ObjectStorage<WebKit::VisitedLinkStore> { struct type { unsigned char __lx[144]; } data; } _visitedLinkStore;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAll;
- (void)addVisitedLinkWithURL:(id)a0;
- (void)removeVisitedLinkWithURL:(id)a0;
- (BOOL)containsVisitedLinkWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addVisitedLinkWithString:(id)a0;

@end
