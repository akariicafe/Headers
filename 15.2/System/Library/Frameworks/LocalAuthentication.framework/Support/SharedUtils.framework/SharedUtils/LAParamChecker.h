@interface LAParamChecker : NSObject

+ (id)checkACL:(id)a0;
+ (id)checkOptions:(id)a0;
+ (id)checkEvent:(long long)a0;
+ (id)checkPolicy:(long long)a0;
+ (id)_checkSet:(id)a0 forValue:(id)a1 entityName:(id)a2;
+ (id)checkCredentialType:(long long)a0;
+ (id)_checkEventProcessing:(id)a0;
+ (id)_checkEventProcessingEventDictionary:(id)a0;
+ (id)checkInternalOperation:(long long)a0 options:(id)a1;
+ (id)_checkDictionary:(id)a0 againstClassDictionary:(id)a1 entryName:(id)a2 customCheckBlock:(id /* block */)a3;

@end
