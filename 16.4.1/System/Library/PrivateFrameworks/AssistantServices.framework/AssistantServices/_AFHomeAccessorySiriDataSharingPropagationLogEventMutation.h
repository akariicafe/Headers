@class NSString, AFHomeAccessorySiriDataSharingPropagationLogEvent, NSDate;

@interface _AFHomeAccessorySiriDataSharingPropagationLogEventMutation : NSObject <AFHomeAccessorySiriDataSharingPropagationLogEventMutating> {
    AFHomeAccessorySiriDataSharingPropagationLogEvent *_base;
    NSDate *_date;
    NSString *_accessoryIdentifier;
    long long _propagationEvent;
    NSString *_propagationEventReason;
    NSString *_associatedChangeLogEventIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasDate : 1; unsigned char hasAccessoryIdentifier : 1; unsigned char hasPropagationEvent : 1; unsigned char hasPropagationEventReason : 1; unsigned char hasAssociatedChangeLogEventIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void)setDate:(id)a0;
- (id)getDate;
- (void).cxx_destruct;
- (id)getAccessoryIdentifier;
- (id)getAssociatedChangeLogEventIdentifier;
- (long long)getPropagationEvent;
- (id)getPropagationEventReason;
- (void)setAccessoryIdentifier:(id)a0;
- (void)setAssociatedChangeLogEventIdentifier:(id)a0;
- (void)setPropagationEvent:(long long)a0;
- (void)setPropagationEventReason:(id)a0;

@end
