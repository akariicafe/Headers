@class NSString, _UIDataSourceSnapshotter;

@interface _UIDataSourceSnapshot : NSObject <_UIDataSourceSnapshot> {
    _UIDataSourceSnapshotter *_snapshotter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfItems;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSection:(long long)a0;
- (long long)numberOfSections;
- (id)indexPathForGlobalIndex:(long long)a0;
- (long long)sectionForGlobalIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)globalIndexForIndexPath:(id)a0;
- (id)initWithDataSourceSnapshotter:(id)a0;

@end
