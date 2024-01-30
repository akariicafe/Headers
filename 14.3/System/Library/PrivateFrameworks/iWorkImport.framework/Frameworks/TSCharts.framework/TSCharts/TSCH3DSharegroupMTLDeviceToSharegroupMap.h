@class TSUOnce, NSMapTable;

@interface TSCH3DSharegroupMTLDeviceToSharegroupMap : NSObject {
    TSUOnce *_mapOnce;
    NSMapTable *_cachedMap;
}

@property (readonly, nonatomic) NSMapTable *map;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
