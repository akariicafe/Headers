@class Protocol;

@interface _ConformsToProtocolCachedKey : NSObject {
    id _object;
    Protocol *_protocol;
}

- (id)initWithObject:(id)a0 protocol:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
