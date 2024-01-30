@class NSData;

@interface BWDeferredDataIntermediate : BWDeferredIntermediate {
    NSData *_archive;
}

- (id)description;
- (void)dealloc;
- (int)setArchive:(id)a0;
- (id)fetchAndRetain:(int *)a0;
- (id)fetchWithCustomClassesAndRetain:(id)a0 err:(int *)a1;

@end
