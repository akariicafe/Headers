@class NSMutableDictionary;

@interface UASharedPasteboardIRManager : NSObject

@property (retain) NSMutableDictionary *lookupTable;

+ (id)sharedIRManager;

- (void).cxx_destruct;
- (id)init;
- (void)registerIRHandlerClass:(Class)a0 forType:(id)a1;
- (id)converterForType:(id)a0;
- (void)initializeConverters;
- (id)registeredConverters;

@end
