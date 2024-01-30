@interface IMAPFSUtils : NSObject

+ (id)stringForPurgableFlags:(unsigned long long)a0;
+ (unsigned long long)purgableFlagsForPath:(id)a0 error:(int *)a1;

@end
