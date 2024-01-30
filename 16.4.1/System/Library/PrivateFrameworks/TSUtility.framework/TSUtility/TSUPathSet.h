@class NSMutableSet, NSMutableDictionary;

@interface TSUPathSet : NSObject <NSCopying> {
    NSMutableSet *mPaths;
    NSMutableDictionary *mBasePathToNumberMap;
    TSUPathSet *mUnderlyingSet;
}

+ (id)parseNumberOutOfBasename:(id)a0 hasNumber:(BOOL *)a1 number:(unsigned int *)a2;
+ (void)processPath:(id)a0 base:(id *)a1 hasBaseNumber:(BOOL *)a2 baseNumber:(unsigned int *)a3 extension:(id *)a4;

- (id)addPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)initWithPaths:(id)a0 basePathToNumberMap:(id)a1;
- (BOOL)isPathUsed:(id)a0;
- (void)pathIsNoLongerUsed:(id)a0;
- (void)pathIsUsed:(id)a0;
- (void)setUnderlyingPathSet:(id)a0;
- (void)unionPathSet:(id)a0;

@end
