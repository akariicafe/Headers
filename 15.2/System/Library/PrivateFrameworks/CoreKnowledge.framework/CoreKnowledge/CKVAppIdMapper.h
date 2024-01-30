@interface CKVAppIdMapper : NSObject

+ (id)convertToUnversalAppId:(id)a0;
+ (BOOL)isKnownAppId:(id)a0;
+ (id)_getKnownAppIdMap;
+ (id)_buildKnownIdentifierToUniversalOriginAppIdMap;
+ (id)_getAllKnownAppIds;

@end
