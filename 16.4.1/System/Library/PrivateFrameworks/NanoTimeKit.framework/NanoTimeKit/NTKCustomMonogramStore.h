@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)customMonogram;
- (void)setCustomMonogram:(id)a0;
- (id)init;
- (id)_customMonogramFromPrefs;
- (void)_notifyClientsOfChange;
- (void).cxx_destruct;

@end
