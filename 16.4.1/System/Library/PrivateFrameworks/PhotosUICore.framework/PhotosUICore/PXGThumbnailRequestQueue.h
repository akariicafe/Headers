@interface PXGThumbnailRequestQueue : NSObject {
    long long _capacity;
}

@property (nonatomic) long long count;
@property (readonly, nonatomic) struct PXGThumbnailRequest { void *x0; unsigned long long x1; unsigned int x2; unsigned short x3; unsigned short x4; } *requests;

- (void)enqueueRequestsWithItemRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textureRequestIDs:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 displayAssetFetchResult:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3;
- (void)removeAllRequests;
- (void)dealloc;
- (void)sortRequests;
- (id)init;
- (id)description;

@end
