@class NSString;

@interface MTLToolsIOScratchBufferAllocator : MTLToolsObject <MTLIOScratchBufferAllocator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)newScratchBufferWithMinimumSize:(unsigned long long)a0;

@end
