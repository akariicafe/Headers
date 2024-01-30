@class NSString;
@protocol _UIContentInsetsEnvironment;

@interface _UICollectionLayoutContainer : NSObject <_UICollectionLayoutContainer_Private>

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (retain, nonatomic) id<_UIContentInsetsEnvironment> insetsEnvironment;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } effectiveContentSize;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } effectiveContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 insetsEnvironment:(id)a2;
- (void).cxx_destruct;

@end
