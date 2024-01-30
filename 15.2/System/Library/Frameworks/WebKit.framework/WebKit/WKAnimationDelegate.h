@class NSString;

@interface WKAnimationDelegate : NSObject <CAAnimationDelegate> {
    unsigned long long _layerID;
    void *_layerTreeHost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
