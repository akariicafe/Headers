@protocol _CDLocalContext;

@interface PMMContextHelper : NSObject

@property (readonly, nonatomic) id<_CDLocalContext> context;

+ (id)sharedInstance;

- (id)fetchDataDictionaryForKeyPath:(id)a0;
- (void)registerForNotifications:(id)a0;
- (id)fetchContextValueForKeyPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
