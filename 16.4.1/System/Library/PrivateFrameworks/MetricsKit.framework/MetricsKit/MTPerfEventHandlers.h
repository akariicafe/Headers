@class MTLoadUrlEventHandler, MTFlexiblePerfEventHandler, MTPageRenderEventHandler;

@interface MTPerfEventHandlers : MTEventHandlers

@property (readonly, nonatomic) MTPageRenderEventHandler *pageRender;
@property (readonly, nonatomic) MTLoadUrlEventHandler *loadUrl;
@property (readonly, nonatomic) MTFlexiblePerfEventHandler *flexible;

- (void).cxx_destruct;
- (Class)baseDataProviderClass;
- (void)registerDefaultEventHandlers;

@end
