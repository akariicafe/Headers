@class NSString;

@interface DIIOObject : NSObject

@property (readonly, nonatomic) unsigned int ioObj;
@property (readonly, copy, nonatomic) NSString *ioClassName;

+ (id)copyDiskImagesControllerWithError:(id *)a0;

- (id)initWithIOObject:(unsigned int)a0;
- (void)dealloc;
- (id)description;
- (id)copyParentWithError:(id *)a0;
- (id)copyPropertyWithClass:(Class)a0 key:(id)a1;
- (id)initWithClassName:(id)a0 error:(id *)a1;
- (id)initWithDIIOObject:(id)a0;
- (id)initWithIOObject:(unsigned int)a0 retain:(BOOL)a1;
- (id)initWithIteratorNext:(id)a0;
- (id)initWithRegistryEntryID:(unsigned long long)a0 error:(id *)a1;
- (id)ioObjectWithClassName:(id)a0 iterateParent:(BOOL)a1 error:(id *)a2;
- (id)newIteratorWithOptions:(unsigned int)a0 error:(id *)a1;
- (unsigned long long)registryEntryIDWithError:(id *)a0;

@end
