@class NSString;

@interface WKAnimationDelegate : NSObject <CAAnimationDelegate> {
    struct ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> { struct ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType> { unsigned long long m_identifier; } m_object; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long m_identifier; } m_processIdentifier; } _layerID;
    void *_layerTreeHost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animationDidStart:(id)a0;
- (id).cxx_construct;
- (void)invalidate;
- (id)initWithLayerID:(struct ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> { struct ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType> { unsigned long long x0; } x0; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long x0; } x1; })a0 layerTreeHost:(void *)a1;

@end
