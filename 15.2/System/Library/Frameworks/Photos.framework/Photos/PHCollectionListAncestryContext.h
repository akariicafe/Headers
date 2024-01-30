@class NSMutableDictionary;
@protocol NSFastEnumeration;

@interface PHCollectionListAncestryContext : NSObject

@property (retain) id<NSFastEnumeration> allCollectionLists;
@property (retain) NSMutableDictionary *collectionListsByOID;

- (id)folderForID:(id)a0;
- (id)initWithCollectionLists:(id)a0;
- (void).cxx_destruct;

@end
