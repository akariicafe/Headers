@class TSUOnce, NSMapTable;

@interface TSCH3DSharegroupMTLDeviceToSharegroupMap : NSObject {
    TSUOnce *_mapOnce;
    NSMapTable *_cachedMap;
}

@property (readonly, nonatomic) NSMapTable *map;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
