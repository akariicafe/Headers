@class NSUUID, _HMContext, NSString, HMEventTrigger;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isEndEvent) BOOL endEvent;
@property (readonly, nonatomic) NSString *triggerType;
@property (weak, nonatomic) HMEventTrigger *eventTrigger;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (BOOL)isSupportedForHome:(id)a0;
+ (BOOL)sharedTriggerActivationSupportedForHome:(id)a0;

- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_unconfigure;
- (id)init;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0 eventTrigger:(id)a1;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)_serializeForAdd;
- (void)_unconfigureContext;
- (void)_updateEventWithPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateFromDictionary:(id)a0;
- (void)_updateTriggerType;

@end
