@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject {
    NSMutableArray *_configurations;
}

@property (retain, nonatomic) id cellContext;

- (void)reset;
- (void)dealloc;
- (void)resetLayoutCaches;
- (id)configurationForRow:(unsigned long long)a0;
- (id)initWithClass:(Class)a0 tableHeight:(double)a1;

@end
