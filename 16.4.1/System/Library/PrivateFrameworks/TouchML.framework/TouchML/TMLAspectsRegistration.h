@class NSMapTable;

@interface TMLAspectsRegistration : NSObject {
    NSMapTable *_registeredAspects;
}

+ (id)shared;
+ (id)keyForClassNamed:(id)a0 signalName:(id)a1 advice:(int)a2;
+ (id)keyForProtocolNamed:(id)a0 signalName:(id)a1 advice:(int)a2;
+ (id)keysForObject:(id)a0 withMetaObjects:(id)a1 signalName:(id)a2 advice:(int)a3;

- (id)init;
- (void).cxx_destruct;
- (id)aspectsWithKey:(id)a0;
- (id)aspectsForObject:(id)a0 signalName:(id)a1 advice:(int)a2;
- (id)aspectsWithKeys:(id)a0;
- (void)registerAspect:(id)a0 withKey:(id)a1;
- (id)storageForKey:(id)a0 createIfMissing:(BOOL)a1;
- (id)strongAspectsFromArray:(id)a0;
- (void)unregisterAspect:(id)a0 withKey:(id)a1;

@end
