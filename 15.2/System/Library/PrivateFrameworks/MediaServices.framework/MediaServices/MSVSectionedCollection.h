@class NSString, NSArray;

@interface MSVSectionedCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSObject> {
    NSArray *_sectionedItems;
    NSArray *_sections;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id firstSection;
@property (readonly, nonatomic) id lastSection;
@property (readonly, nonatomic) id firstItem;
@property (readonly, nonatomic) id lastItem;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)msv_immutableClass;
+ (Class)msv_mutableClass;

- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)itemAtIndexPath:(id)a0;
- (void)_initializeAsEmptySectionedCollection;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)indexPathForGlobalIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allSections;
- (id)_stateDumpObject;
- (long long)globalIndexForIndexPath:(id)a0;

@end
