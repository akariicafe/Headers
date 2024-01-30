@class NSString, NSData, KVProfileInfo;

@interface KVEmbeddedProfileReader : NSObject <KVProfileReader> {
    NSData *_data;
    const struct Profile { unsigned char x0[1]; } *_profile;
    KVProfileInfo *_profileInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)profileInfo;
- (id)data;
- (void).cxx_destruct;
- (BOOL)enumerateDatasetsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithData:(id)a0 profile:(const struct Profile { unsigned char x0[1]; } *)a1 profileInfo:(id)a2;

@end
