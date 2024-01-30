@class NSString, NSDictionary, NSArray;

@interface NTKFacePigmentSet : NSObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSDictionary *collectionBySlots;
@property (readonly, nonatomic) long long numberOfSlots;
@property (readonly, nonatomic) NSArray *defaultGalleryColors;
@property (readonly, nonatomic) BOOL hasMultipleSlots;

+ (id)facePigmentSetFromProtoBuffer:(id)a0 sharedCollections:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)pigmentsFromMostRecentAddableCollectionForSlot:(id)a0;
- (id)collectionForSlot:(id)a0;
- (id)pigmentSet;
- (long long)numberOfItemsForAllSlots;
- (id)protoBuffer;

@end
