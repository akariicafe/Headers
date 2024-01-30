@class NSDictionary, NSString, NSArray, NSOrderedSet, NTKPigmentCollectionConfig, NTKPigmentEditOption, NSMutableDictionary;

@interface NTKPigmentCollection : NSObject {
    NSMutableDictionary *_itemsByName;
    NSMutableDictionary *_collectionsByName;
    NSOrderedSet *_allItems;
}

@property (copy) NSString *collectionName;
@property (retain) NTKPigmentCollectionConfig *config;
@property (copy) NSArray *collections;
@property (retain) NTKPigmentEditOption *defaultOption;
@property (retain) NSOrderedSet *items;
@property (copy) NSArray *defaultGalleryColors;
@property (retain) NSMutableDictionary *faceSpecificPigmentsByFullname;
@property (copy, nonatomic) NSDictionary *migration;
@property (nonatomic, getter=isShared) BOOL shared;
@property (nonatomic, getter=isStub) BOOL stub;
@property (readonly) NSOrderedSet *allItems;
@property (readonly) NSDictionary *collectionsByName;

+ (id)collectionFromProtoBuffer:(id)a0;
+ (id)collectionFromProtoBuffer:(id)a0 sharedCollections:(id)a1;
+ (id)stubCollectionWithName:(id)a0;

- (id)initWithName:(id)a0;
- (unsigned long long)count;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_pigmentForName:(id)a0;
- (void)appendCollection:(id)a0;
- (id)buildNamesMappingWithPigments:(id)a0;
- (id)defaultOptionWithName:(id)a0;
- (void)fulfillWithSharedCollections:(id)a0;
- (BOOL)hasAddableCollection;
- (BOOL)isRootCollection;
- (void)mergeWithCollection:(id)a0;
- (id)pigmentWithFullname:(id)a0;
- (id)pigmentsFromMostRecentAddableCollection;
- (id)pigmentsFromMostRecentAddableCollections;
- (id)protoBuffer;
- (id)protoBufferIgnoringSharedCollections:(BOOL)a0;
- (void)setDefaultGalleryColorWithNames:(id)a0;

@end
