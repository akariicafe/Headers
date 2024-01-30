@class NSDictionary, NSMutableDictionary, CalDefaultDictionary;

@interface CUIKObjectGroup : NSObject

@property (retain) NSDictionary *originalObjectMap;
@property (retain) NSMutableDictionary *objectMap;
@property (retain) CalDefaultDictionary *spawnedObjectIdentifiers;

- (void).cxx_destruct;

@end
