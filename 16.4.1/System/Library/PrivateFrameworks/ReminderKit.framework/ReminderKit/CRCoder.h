@class NSOrderedSet, NSDictionary, NSMutableOrderedSet;

@interface CRCoder : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects;
@property (nonatomic) void *currentDocument;
@property (readonly, nonatomic) NSOrderedSet *clusterTypeSet;
@property (readonly, nonatomic) NSDictionary *typeToClassDict;
@property (readonly, nonatomic) NSOrderedSet *typeSet;

+ (void)_registerClass:(Class)a0 forType:(id)a1 cluster:(BOOL)a2;
+ (void)registerCRClasses;
+ (void)registerClass:(Class)a0 forType:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)typeIndexForClass:(Class)a0;

@end
