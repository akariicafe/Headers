@class NSString, GEOComposedRoute, LPLinkMetadata;

@interface MURouteLinkPresentationActivityProvider : MURouteActivityProvider <UIActivityItemLinkPresentationSource> {
    GEOComposedRoute *_composedRoute;
    LPLinkMetadata *_cachedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
