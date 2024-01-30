@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_notifyClientsOfChange;
- (id)_customMonogramFromPrefs;
- (id)customMonogram;
- (void)setCustomMonogram:(id)a0;

@end
