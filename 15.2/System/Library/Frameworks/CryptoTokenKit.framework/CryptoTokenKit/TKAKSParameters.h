@class NSData;

@interface TKAKSParameters : NSObject {
    struct aks_params_s { } *_params;
    NSData *_encoded;
}

@property (readonly, copy) NSData *data;
@property (readonly) const void *bytes;
@property (readonly) unsigned long long length;

- (void)setData:(id)a0 forKey:(unsigned int)a1;
- (id)description;
- (void)setNumber:(long long)a0 forKey:(unsigned int)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithParameters:(id)a0;

@end
