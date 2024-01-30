@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MPRemoteCommandDelegate_Private, MPRemoteCommandDelegate_Internal;

@interface MPRemoteCommand : NSObject <_MPStateDumpPropertyListTransformable> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_handlers;
}

@property (weak, nonatomic) id<MPRemoteCommandDelegate_Internal> commandCenterDelegate;
@property (nonatomic, getter=isObserving) BOOL observing;
@property (readonly, nonatomic) BOOL hasTargets;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic, getter=isSupportedAndEnabled) BOOL supportedAndEnabled;
@property (readonly, nonatomic) unsigned int mediaRemoteCommandType;
@property (weak, nonatomic) id<MPRemoteCommandDelegate_Private> delegate;
@property (nonatomic) BOOL skipSerializedEventDelivery;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTarget:(id)a0 action:(SEL)a1;
- (id)_stateDumpObject;
- (void).cxx_destruct;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)removeTarget:(id)a0;
- (id)addTargetWithHandler:(id /* block */)a0;
- (BOOL)isSupportedForContentItemIdentifier:(id)a0;
- (BOOL)isEnabledForContentItemIdentifier:(id)a0;
- (void)invokeCommandWithEvent:(id)a0 completion:(id /* block */)a1;
- (void *)createCommandInfoRepresentation;
- (void)notifyPropagatablePropertyChanged;
- (id)newCommandEvent;
- (id)newCommandEventWithContentItemIdentifier:(id)a0;
- (id)newCommandEventWithPlaybackQueueOffset:(long long)a0;
- (id)newCommandEventWithCommandType:(unsigned int)a0 options:(id)a1;
- (id)newSeekCommandEventWithType:(unsigned long long)a0;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
