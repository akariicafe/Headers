@class Protocol;

@interface _ConformsToProtocolCachedKey : NSObject {
    id _object;
    Protocol *_protocol;
}

- (id)initWithObject:(id)a0 protocol:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
