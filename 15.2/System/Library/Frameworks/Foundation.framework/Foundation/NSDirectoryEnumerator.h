@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (readonly, copy) NSDictionary *fileAttributes;
@property (readonly, copy) NSDictionary *directoryAttributes;
@property (readonly) BOOL isEnumeratingDirectoryPostOrder;
@property (readonly) unsigned long long level;

- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;

@end
