@class NSString;

@interface AVFigEndpointFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator> {
    BOOL _useRouteConfigUpdatedNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedOutputDeviceTranslator;

- (id)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { } *)a0;
- (id)predictedOutputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { } *)a0;
- (id)init;
- (id)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext { } *)a0;
- (void)setOutputDevice:(id)a0 withOptions:(struct __CFDictionary { } *)a1 onRoutingContext:(struct OpaqueFigRoutingContext { } *)a2 completionHandler:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 withOptions:(struct __CFDictionary { } *)a1 onRoutingContext:(struct OpaqueFigRoutingContext { } *)a2 completionHandler:(id /* block */)a3;
- (void)addOutputDevice:(id)a0 withOptions:(struct __CFDictionary { } *)a1 toRoutingContext:(struct OpaqueFigRoutingContext { } *)a2 completionHandler:(id /* block */)a3;
- (void)removeOutputDevice:(id)a0 withOptions:(const struct __CFDictionary { } *)a1 fromRoutingContext:(struct OpaqueFigRoutingContext { } *)a2 completionHandler:(id /* block */)a3;
- (id)initForUsingRouteConfigUpdatedNotification:(BOOL)a0;

@end
