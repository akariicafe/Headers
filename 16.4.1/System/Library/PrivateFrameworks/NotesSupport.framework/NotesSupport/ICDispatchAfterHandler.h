@class NSMutableDictionary;

@interface ICDispatchAfterHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierBlockMap;

+ (id)appLifeCycleHandler;

- (id)init;
- (void).cxx_destruct;
- (void)cancelAll;
- (void)dispatchAfter:(double)a0 stringIdentifier:(id)a1 withBlock:(id /* block */)a2;
- (void)cancelBlocksWithStringIdentifier:(id)a0;
- (id)identifierForStringIdentifier:(id)a0;

@end
