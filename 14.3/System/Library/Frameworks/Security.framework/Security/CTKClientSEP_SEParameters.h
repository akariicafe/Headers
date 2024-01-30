@class NSData;

@interface CTKClientSEP_SEParameters : NSObject {
    struct aks_params_s { } *_params;
    NSData *_encoded;
}

@property (readonly, copy) NSData *data;
@property (readonly) const void *bytes;
@property (readonly) unsigned long long length;

- (id)init;
- (void).cxx_destruct;
- (void)setNumber:(long long)a0 forKey:(unsigned int)a1;
- (void)dealloc;
- (id)initWithParameters:(id)a0;
- (void)setData:(id)a0 forKey:(unsigned int)a1;

@end
