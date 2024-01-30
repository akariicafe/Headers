@protocol _CDLocalContext;

@interface _DECContextHelper : NSObject

@property (readonly, nonatomic) id<_CDLocalContext> context;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotifications:(id)a0;
- (id)fetchContextValueForKeyPath:(id)a0;
- (id)fetchDataDictionaryForKeyPath:(id)a0;

@end
