@class NSString;
@protocol TSDHint;

@interface TSDDefaultHint : NSObject <TSDHint>

@property (class, readonly, nonatomic) Class archivedHintClass;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) unsigned long long edges;
@property (readonly, nonatomic) id<TSDHint> firstChildHint;
@property (readonly, nonatomic) id<TSDHint> lastChildHint;
@property (readonly, nonatomic) BOOL isFirstHint;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } effectiveSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyForArchiving;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edges:(unsigned long long)a1;
- (BOOL)isLastPartitionHorizontally:(BOOL)a0;
- (BOOL)overlapsWithSelectionPath:(id)a0;

@end
