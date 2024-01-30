@class NSHashTable;

@interface IXAppInstallObjectsMetadata : NSObject

@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSHashTable *instances;

- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;

@end
