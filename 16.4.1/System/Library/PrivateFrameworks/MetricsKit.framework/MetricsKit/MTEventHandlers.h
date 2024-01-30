@class MTBaseEventDataProvider, NSMutableDictionary;

@interface MTEventHandlers : MTObject

@property (retain, nonatomic) MTBaseEventDataProvider *base;
@property (retain, nonatomic) NSMutableDictionary *registrations;

- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (Class)baseDataProviderClass;
- (void)registerDefaultEventHandlers;
- (void)registerEventHandlerName:(id)a0 eventData:(id)a1;
- (void)registerEventHandlerName:(id)a0 eventHandlerClass:(Class)a1;
- (void)registerEventHandlerName:(id)a0 eventHandlerClass:(Class)a1 eventData:(id)a2;

@end
