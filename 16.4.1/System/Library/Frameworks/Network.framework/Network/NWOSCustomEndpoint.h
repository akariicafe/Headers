@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSCustomEndpoint : NWConcrete_nw_endpoint {
    NSObject<OS_dispatch_data> *data;
    id /* block */ resolver_block;
    unsigned int type;
}

- (id)copyDictionary;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (unsigned int)type;
- (char *)createDescription:(BOOL)a0;
- (unsigned long long)getHash;
- (void).cxx_destruct;
- (id)copyEndpoint;

@end
