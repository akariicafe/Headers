@interface TSPObjectSerializationDirectoryEntry : NSObject

@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long size;

- (id)init;
- (id)initWithOffset:(unsigned long long)a0 size:(unsigned long long)a1;

@end
