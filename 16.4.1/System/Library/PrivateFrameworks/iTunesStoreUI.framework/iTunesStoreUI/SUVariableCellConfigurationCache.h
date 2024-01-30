@class NSArray, NSMutableDictionary;

@interface SUVariableCellConfigurationCache : NSObject {
    NSMutableDictionary *_caches;
    double _tableHeight;
}

@property (readonly, nonatomic) NSArray *caches;
@property (retain, nonatomic) id cellContext;

- (void)dealloc;
- (void)reset;
- (id)cacheForClass:(Class)a0;
- (id)initWithTableHeight:(double)a0;
- (void)resetLayoutCaches;

@end
