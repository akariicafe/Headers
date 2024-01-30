@class NSArray;

@interface BWDeferredArrayIntermediate : BWDeferredDataIntermediate {
    NSArray *_array;
}

+ (BOOL)supportsSecureCoding;

- (int)flush;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)archive:(int *)a0;
- (void)dealloc;
- (id)initWithArray:(id)a0 tag:(id)a1 URL:(id)a2;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;
- (int)setArchive:(id)a0;
- (id)fetchWithCustomClassesAndRetain:(id)a0 err:(int *)a1;

@end
