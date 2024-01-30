@class NMSMediaSyncService;

@interface NMSKeepLocalRequestProxy : NMSKeepLocalRequest {
    NMSMediaSyncService *_mediaSyncService;
}

- (void).cxx_destruct;
- (id)initWithModelObject:(id)a0 enableState:(long long)a1;
- (void)performWithOptions:(id)a0 completion:(id /* block */)a1;

@end
