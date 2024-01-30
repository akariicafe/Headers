@class NSString;

@interface _WKVisitedLinkStore : NSObject <WKObject> {
    struct ObjectStorage<WebKit::VisitedLinkStore> { struct type { unsigned char __lx[152]; } data; } _visitedLinkStore;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAll;
- (id)init;
- (BOOL)containsVisitedLinkWithURL:(id)a0;
- (void)dealloc;
- (void)addVisitedLinkWithURL:(id)a0;
- (void)addVisitedLinkWithString:(id)a0;
- (void)removeVisitedLinkWithURL:(id)a0;

@end
