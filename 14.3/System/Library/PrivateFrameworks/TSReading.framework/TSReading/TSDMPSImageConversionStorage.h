@class NSMapTable;

@interface TSDMPSImageConversionStorage : NSObject

@property (readonly, nonatomic) NSMapTable *storage;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllObjects;

@end
