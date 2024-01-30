@class NSString, NSMutableDictionary;

@interface GKCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {
    NSMutableDictionary *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)_currentAppModuleName;
- (id)_mangledSwiftClassName:(id)a0 moduleName:(id)a1;
- (id)_findValidClassName:(id)a0;

@end
