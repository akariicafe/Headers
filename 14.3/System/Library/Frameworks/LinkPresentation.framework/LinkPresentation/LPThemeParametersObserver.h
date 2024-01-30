@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {
    NSHashTable *_clients;
}

+ (id)shared;

- (void)addClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeContentSizeCategory:(id)a0;
- (void)didChangeDarkenColorsStatus:(id)a0;
- (void)didChangeThemeParameters;

@end
