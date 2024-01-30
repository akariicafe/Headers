@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_notifyClientsOfChange;
- (id)_customMonogramFromPrefs;
- (id)customMonogram;
- (void)setCustomMonogram:(id)a0;

@end
