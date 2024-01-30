@class NSData;

@interface BWDeferredDataIntermediate : BWDeferredIntermediate {
    NSData *_archive;
}

- (int)setArchive:(id)a0;
- (id)fetchAndRetain:(int *)a0;
- (id)fetchWithCustomClassesAndRetain:(id)a0 err:(int *)a1;
- (void)dealloc;
- (int)_setURL:(id)a0 prefetchQueue:(id)a1;

@end
