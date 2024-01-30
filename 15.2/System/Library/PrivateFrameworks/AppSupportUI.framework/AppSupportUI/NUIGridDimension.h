@class NSArray, NSString, NUIContainerGridView;

@interface NUIGridDimension : NSObject <NUIGridDimension> {
    NUIContainerGridView *_gridView;
    NSArray *_arrangedSubviews;
    double _length;
    double _spacing;
    struct { unsigned char align : 8; unsigned char isRow : 1; unsigned char hidden : 1; unsigned char wasDetached : 1; } _flags;
}

@property (copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) double length;
@property (nonatomic) double spacingAfter;
@property (nonatomic) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)arrangedSubviews;
- (void)dealloc;

@end
