@class NSString;

@interface PEAdjustmentDataCacheKey : NSObject <NSCopying> {
    NSString *_localIdentifier;
    double _adjustmentDate;
    BOOL _originalAdjustmentData;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 originalAdjustmentData:(BOOL)a1;

@end
