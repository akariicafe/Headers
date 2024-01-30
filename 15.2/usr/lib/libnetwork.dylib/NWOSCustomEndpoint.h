@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSCustomEndpoint : NWConcrete_nw_endpoint {
    NSObject<OS_dispatch_data> *data;
    id /* block */ resolver_block;
    unsigned int type;
}

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyDictionary;
- (unsigned long long)getHash;
- (void).cxx_destruct;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;
- (unsigned int)type;

@end
