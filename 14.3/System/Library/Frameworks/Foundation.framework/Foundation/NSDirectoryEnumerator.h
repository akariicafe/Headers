@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (readonly, copy) NSDictionary *fileAttributes;
@property (readonly, copy) NSDictionary *directoryAttributes;
@property (readonly) BOOL isEnumeratingDirectoryPostOrder;
@property (readonly) unsigned long long level;

- (void)skipDescendants;
- (void)skipDescendents;
- (id)nextObject;

@end
