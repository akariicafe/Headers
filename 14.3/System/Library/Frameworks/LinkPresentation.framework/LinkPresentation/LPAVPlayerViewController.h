@interface LPAVPlayerViewController : AVPlayerViewController {
    id /* block */ _readyForDisplayCallback;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithPlayerLayerView:(id)a0;

@end
