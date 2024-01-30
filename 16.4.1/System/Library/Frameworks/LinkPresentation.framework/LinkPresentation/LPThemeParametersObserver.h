@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {
    NSHashTable *_clients;
}

+ (id)shared;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didChangeDarkenColorsStatus:(id)a0;
- (void)didChangeThemeParameters;

@end
