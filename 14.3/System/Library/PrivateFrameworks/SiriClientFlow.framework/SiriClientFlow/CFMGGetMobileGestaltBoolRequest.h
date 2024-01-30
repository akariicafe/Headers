@class NSString;

@interface CFMGGetMobileGestaltBoolRequest : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)getMobileGestaltBoolRequest;
+ (id)getMobileGestaltBoolRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (void)handleWithCompletion:(id /* block */)a0;

@end
