@class NSArray, AVRoutingSessionDestinationInternal;

@interface AVRoutingSessionDestination : NSObject {
    AVRoutingSessionDestinationInternal *_ivars;
}

@property (readonly, nonatomic) NSArray *outputDeviceDescriptions;
@property (readonly, nonatomic) float probability;
@property (readonly, nonatomic) BOOL providesExternalVideoPlayback;

- (id)init;
- (void)dealloc;
- (id)initWithFigRoutingSessionDestination:(const struct __CFDictionary { } *)a0;
- (BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id *)a0;
- (id)description;

@end
