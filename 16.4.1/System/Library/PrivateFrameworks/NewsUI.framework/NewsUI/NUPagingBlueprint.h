@class NSOrderedSet, NSArray, NSString;
@protocol NUPage;

@interface NUPagingBlueprint : NSObject <NUPaging>

@property (retain, nonatomic) NSOrderedSet *blueprintItems;
@property (readonly, nonatomic) id<NUPage> firstPage;
@property (readonly, nonatomic) id<NUPage> lastPage;
@property (readonly, nonatomic) NSArray *allPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPages:(id)a0;
- (void)forEachPage:(id /* block */)a0;
- (id)pageAfterIdentifier:(id)a0;
- (id)pageBeforeForIdentifier:(id)a0;
- (id)pageForIdentifier:(id)a0;

@end
