@class NSMutableDictionary;

@interface UASharedPasteboardIRManager : NSObject

@property (retain) NSMutableDictionary *lookupTable;

+ (id)sharedIRManager;

- (id)init;
- (void).cxx_destruct;
- (void)registerIRHandlerClass:(Class)a0 forType:(id)a1;
- (id)converterForType:(id)a0;
- (void)initializeConverters;
- (id)registeredConverters;

@end
