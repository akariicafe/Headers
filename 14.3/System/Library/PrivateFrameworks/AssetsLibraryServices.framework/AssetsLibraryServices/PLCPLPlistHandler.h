@interface PLCPLPlistHandler : NSObject

+ (void)initialize;
+ (void)saveCPLPlistObject:(id)a0 forKey:(id)a1 pathManager:(id)a2;
+ (id)readCPLPlistObjectWithKey:(id)a0 pathManager:(id)a1;
+ (BOOL)CPLPlistFileExistsWithPathManager:(id)a0;
+ (void)deleteCPLPlistWithPathManager:(id)a0;
+ (id)_cplPlistURLWithPathManager:(id)a0 verb:(id)a1;
+ (id)_readCPLPlistWithPathManager:(id)a0;

@end
