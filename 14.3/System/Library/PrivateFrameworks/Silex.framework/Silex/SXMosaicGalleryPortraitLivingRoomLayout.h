@interface SXMosaicGalleryPortraitLivingRoomLayout : SXMosaicGalleryGroupLayout

- (double)desiredHeightForLargeItem;
- (double)desiredHeightForSmallerItems;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForItem:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForLargeItem;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForSmallerItems;
- (unsigned long long)indexOfLargeItem;
- (double)calculateHeight;
- (id)calculateFrames;

@end
