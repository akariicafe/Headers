@interface MTPlaybackPositionController : NSObject {
    void /* unknown type, empty encoding */ requestController;
}

- (id)init;
- (void).cxx_destruct;
- (void)updatePlaybackPositionWithEpisodeStoreId:(long long)a0 completed:(BOOL)a1 position:(double)a2 account:(id)a3 completion:(id /* block */)a4;

@end
