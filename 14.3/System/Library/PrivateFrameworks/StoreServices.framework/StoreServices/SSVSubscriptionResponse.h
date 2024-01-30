@class NSString, NSMutableDictionary;

@interface SSVSubscriptionResponse : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_accountUniqueIdentifierToSubscriptionStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSubscriptionStatus:(id)a0 forAccountUniqueIdentifier:(unsigned long long)a1;
- (id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)a0;

@end
