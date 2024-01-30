@class NSString, UIVisualEffectBackingHost, NSMutableSet, CALayer;

@interface _UIViewBackingAux : NSObject {
    CALayer *_intermediateLayer;
    CALayer *_intermediateLayerRetained;
    NSMutableSet *_privateSubviews;
    UIVisualEffectBackingHost *_effectHost;
    NSString *_captureGroupName;
}

- (void).cxx_destruct;

@end
