@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {
    NSHashTable *_clients;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)addClient:(id)a0;
- (void)dealloc;
- (void)didChangeDarkenColorsStatus:(id)a0;
- (void)didChangeThemeParameters;

@end
