@class NSMapTable;

@interface TSDMPSImageConversionStorage : NSObject

@property (readonly, nonatomic) NSMapTable *storage;

- (void)removeAllObjects;
- (id)init;
- (void).cxx_destruct;

@end
