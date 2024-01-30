@class NSHashTable;

@interface IXAppInstallObjectsMetadata : NSObject

@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSHashTable *instances;

- (void)addObject:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
