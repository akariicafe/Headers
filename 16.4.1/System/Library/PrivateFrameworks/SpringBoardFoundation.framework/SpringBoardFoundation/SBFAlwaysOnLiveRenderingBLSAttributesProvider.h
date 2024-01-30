@class NSString;
@protocol SBFAlwaysOnLiveRenderingBLSAttributesProvider;

@interface SBFAlwaysOnLiveRenderingBLSAttributesProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAttributesProvider> {
    id<SBFAlwaysOnLiveRenderingBLSAttributesProvider> _provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithFBSScene:(id)a0;
- (id)assertionAttributes;
- (id)initWithUIScene:(id)a0;

@end
