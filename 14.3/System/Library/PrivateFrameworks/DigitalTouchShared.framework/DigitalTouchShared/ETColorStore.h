@class NSArray, NSMutableArray;

@interface ETColorStore : NSObject {
    NSMutableArray *_colors;
    unsigned long long _selectedColorIndex;
    BOOL _selectedIndexLoaded;
}

@property (nonatomic) unsigned long long selectedColorIndex;
@property (readonly, nonatomic) NSArray *colors;

+ (id)defaultStore;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_colors;
- (void)defaultsChanged:(id)a0;
- (void)saveColor:(id)a0 forIndex:(unsigned long long)a1;
- (void)addDefaultsObserver;

@end
