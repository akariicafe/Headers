@class NSString, NSSet;

@interface _GCDevicePhysicalInputElement : _GCDevicePhysicalInputView <GCPhysicalInputElement>

@property (readonly, copy) NSString *identifier;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *aliases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (unsigned long long)handleGamepadEvent:(id)a0 withTimestamp:(double)a1;
- (id)initWith:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)onCommitInvokeCallbacks:(unsigned long long)a0;

@end
