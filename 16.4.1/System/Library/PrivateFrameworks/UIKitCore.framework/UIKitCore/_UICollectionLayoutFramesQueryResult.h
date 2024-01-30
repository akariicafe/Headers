@class NSCollectionLayoutItem, NSUUID;

@interface _UICollectionLayoutFramesQueryResult : NSObject <NSCopying> {
    BOOL _isFrameAdjustedForPinning;
    long long _index;
    long long _zIndex;
    long long _resultKind;
    NSCollectionLayoutItem *_item;
    NSUUID *_supplementaryEnrollmentIdentifier;
    long long _auxillaryKind;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
