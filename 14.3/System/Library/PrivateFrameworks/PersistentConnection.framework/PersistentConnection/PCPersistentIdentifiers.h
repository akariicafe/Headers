@interface PCPersistentIdentifiers : NSObject

+ (id)_processNamePrefix;
+ (id)processNameAndPidIdentifier;
+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)a0;
+ (int)pidFromMatchingIdentifer:(id)a0;

@end
