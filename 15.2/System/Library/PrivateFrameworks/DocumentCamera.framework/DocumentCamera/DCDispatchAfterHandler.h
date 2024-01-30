@class NSMutableDictionary;

@interface DCDispatchAfterHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierBlockMap;

+ (id)appLifeCycleHandler;

- (void)cancelAll;
- (void).cxx_destruct;
- (id)init;
- (void)cancelBlocksWithStringIdentifier:(id)a0;
- (void)dispatchAfter:(double)a0 stringIdentifier:(id)a1 withBlock:(id /* block */)a2;
- (id)identifierForStringIdentifier:(id)a0;

@end
