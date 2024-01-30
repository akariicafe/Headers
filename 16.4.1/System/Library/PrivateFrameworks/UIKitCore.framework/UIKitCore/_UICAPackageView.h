@class CAPackage, NSArray;

@interface _UICAPackageView : UIView {
    CAPackage *_package;
    NSArray *_rootViews;
}

+ (void)loadPackageViewWithData:(id)a0 publishedObjectViewClassMap:(id)a1 completion:(id /* block */)a2;
+ (id)_newViewHierarchyFrom:(id)a0 publishedObjectViewClassMap:(id)a1 into:(id)a2;
+ (BOOL)_shouldCatchDecodingExceptions;
+ (void)loadPackageViewWithContentsOfURL:(id)a0 publishedObjectViewClassMap:(id)a1 completion:(id /* block */)a2;
+ (void)loadPackageViewWithObject:(id)a0 publishedObjectViewClassMap:(id)a1 completion:(id /* block */)a2;

- (id)publishedObjectWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 publishedObjectViewClassMap:(id)a1;
- (id)initWithData:(id)a0 publishedObjectViewClassMap:(id)a1;
- (id)publishedViewWithName:(id)a0;

@end
