@class NSArray, NSMutableArray;

@interface ETColorStore : NSObject {
    NSMutableArray *_colors;
    unsigned long long _selectedColorIndex;
    BOOL _selectedIndexLoaded;
}

@property (nonatomic) unsigned long long selectedColorIndex;
@property (readonly, nonatomic) NSArray *colors;

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)init;
- (void)defaultsChanged:(id)a0;
- (id)_colors;
- (void)dealloc;
- (void)saveColor:(id)a0 forIndex:(unsigned long long)a1;
- (void)addDefaultsObserver;

@end
