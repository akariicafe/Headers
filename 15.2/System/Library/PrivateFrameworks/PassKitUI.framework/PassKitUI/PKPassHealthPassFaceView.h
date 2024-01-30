@interface PKPassHealthPassFaceView : PKPassFrontFaceView {
    unsigned long long _requestedRegions;
    unsigned long long _effectiveRegions;
}

- (id)initWithStyle:(long long)a0;
- (void)didAuthenticate;
- (id)templateForLayoutMode:(long long)a0;
- (void)setVisibleRegions:(unsigned long long)a0;
- (unsigned long long)visibleRegions;
- (id)templateForHeaderBucket;

@end
