@interface CLKCurrentLocaleSentinel : NSObject

@property (class, readonly, nonatomic) CLKCurrentLocaleSentinel *shared;

- (id)_init;
- (void)_handleLocaleChange;

@end
