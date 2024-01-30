@class NSString;

@interface SAPhoneCallState : AceObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL active;
@property (nonatomic) BOOL incoming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callState;
+ (id)callStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
