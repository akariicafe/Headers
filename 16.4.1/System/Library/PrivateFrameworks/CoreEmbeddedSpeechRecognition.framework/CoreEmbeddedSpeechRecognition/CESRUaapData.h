@interface CESRUaapData : NSObject

+ (id)readUaapOovsForLanguage:(id)a0;
+ (BOOL)removeUaapOovsForLanguage:(id)a0 bundleId:(id)a1;
+ (BOOL)writeUaapOovsForLanguage:(id)a0 bundleId:(id)a1 customProns:(id)a2 newOovs:(id)a3 error:(id *)a4;

@end
