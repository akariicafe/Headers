@interface FFSubscription : NSObject

+ (id)decodeFromDictionary:(id)a0;
+ (id)mergeSubscriptions:(id)a0;

- (id)initPrivate;
- (id)init;
- (id)encodeToDictionary;
- (BOOL)matchesFeature:(id)a0 inDomain:(id)a1 inAlreadyLockedConfiguration:(id)a2;
- (BOOL)matchesFeature:(id)a0 inDomain:(id)a1 inConfiguration:(id)a2;
- (id)nameOfClass;

@end
