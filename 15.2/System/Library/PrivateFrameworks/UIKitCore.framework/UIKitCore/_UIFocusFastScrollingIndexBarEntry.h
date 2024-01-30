@class NSString, NSIndexPath;

@interface _UIFocusFastScrollingIndexBarEntry : NSObject {
    BOOL _isPlaceholder;
    BOOL _hasCachedContentOffset;
    struct CGPoint { double x; double y; } _cachedContentOffset;
    id /* block */ _contentOffsetGenerator;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (copy, nonatomic) NSIndexPath *targetFocusedIndexPath;

+ (id)placeholderEntryWithEntryBefore:(id)a0 after:(id)a1;
+ (id)entryWithTitle:(id)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
+ (id)entryWithTitle:(id)a0 generator:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithTitle:(id)a0 generator:(id /* block */)a1;

@end
