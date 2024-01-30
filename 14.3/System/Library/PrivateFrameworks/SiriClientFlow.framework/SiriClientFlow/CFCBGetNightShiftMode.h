@class NSString;

@interface CFCBGetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)getNightShiftMode;
+ (id)getNightShiftModeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (void)handleWithCompletion:(id /* block */)a0;
- (void)getNightShiftStatusWithCompletion:(id /* block */)a0;

@end
