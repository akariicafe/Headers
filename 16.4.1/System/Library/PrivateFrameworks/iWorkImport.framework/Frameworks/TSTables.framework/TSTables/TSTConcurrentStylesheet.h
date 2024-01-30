@class NSMapTable, TSSStylesheet;

@interface TSTConcurrentStylesheet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _repairOrReplaceLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _variationLock;
}

@property (retain, nonatomic) TSSStylesheet *stylesheet;
@property (retain, nonatomic) NSMapTable *repairOrReplaceMap;
@property (retain, nonatomic) NSMapTable *variationMap;

- (void).cxx_destruct;
- (id)variationOfStyle:(id)a0 propertyMap:(id)a1;
- (id)repairOrReplaceErrantStyle:(id)a0;
- (id)initWithStylesheet:(id)a0;

@end
