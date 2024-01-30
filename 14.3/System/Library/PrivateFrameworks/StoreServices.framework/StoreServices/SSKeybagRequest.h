@class NSNumber, NSString;

@interface SSKeybagRequest : SSRequest <SSXPCCoding>

@property (readonly) NSNumber *accountID;
@property (copy) id contentIdentifier;
@property long long keybagOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)accountIdentifier;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithAccountIdentifier:(id)a0;

@end
