@class DNDSMutableModeAssertionStore;

@interface _DNDSSyncMessageGroup : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long protocolVersion;
@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, copy, nonatomic) DNDSMutableModeAssertionStore *store;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithServiceType:(unsigned long long)a0 protocolVersion:(unsigned long long)a1 store:(id)a2;

@end
