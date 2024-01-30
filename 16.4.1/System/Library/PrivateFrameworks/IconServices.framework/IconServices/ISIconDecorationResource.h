@class NSString, ISIconDecoration;
@protocol ISScalableCompositorResource;

@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource>

@property (readonly) id<ISScalableCompositorResource> internalResource;
@property (readonly) ISIconDecoration *decoration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
