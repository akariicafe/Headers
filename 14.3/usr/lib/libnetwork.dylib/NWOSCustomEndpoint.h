@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSCustomEndpoint : NWConcrete_nw_endpoint {
    NSObject<OS_dispatch_data> *data;
    id /* block */ resolver_block;
    unsigned int type;
}

- (id)copyDictionary;
- (void).cxx_destruct;
- (unsigned long long)getHash;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:(id)a0 matchInterface:(BOOL)a1 matchParent:(BOOL)a2;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;

@end
