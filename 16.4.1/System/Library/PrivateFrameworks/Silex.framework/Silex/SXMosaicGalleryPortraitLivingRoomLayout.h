@interface SXMosaicGalleryPortraitLivingRoomLayout : SXMosaicGalleryGroupLayout

- (double)calculateHeight;
- (id)calculateFrames;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForItem:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForLargeItem;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForSmallerItems;
- (double)desiredHeightForLargeItem;
- (double)desiredHeightForSmallerItems;
- (unsigned long long)indexOfLargeItem;

@end
