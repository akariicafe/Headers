@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject {
    NSMutableArray *_configurations;
}

@property (retain, nonatomic) id cellContext;

- (void)dealloc;
- (void)reset;
- (id)configurationForRow:(unsigned long long)a0;
- (id)initWithClass:(Class)a0 tableHeight:(double)a1;
- (void)resetLayoutCaches;

@end
