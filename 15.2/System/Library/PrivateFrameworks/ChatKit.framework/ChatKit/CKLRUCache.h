@class NSString;

@interface CKLRUCache : CPLRUDictionary <CKCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
