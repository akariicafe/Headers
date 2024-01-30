@class NSString, NSDictionary, NSData, NSNumber;

@interface WFMediaItemDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *itemName;
@property (readonly, copy, nonatomic) NSNumber *persistentIdentifier;
@property (readonly, copy, nonatomic) NSData *playbackArchiveData;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allDescriptorsForMediaTypeUsingMPMediaQuery:(id)a0;
+ (id)mpMediaQueryForPersistentIdentifier:(id)a0 withMediaType:(id)a1;
+ (id)itemCollectionFromQuery:(id)a0 mediaType:(id)a1;
+ (id)mpMediaQueryForName:(id)a0 withMediaType:(id)a1;
+ (id)collectionForPlaybackWithItemName:(id)a0 persistentIdentifier:(id)a1 mediaType:(id)a2;
+ (id)allDescriptorsInLibraryForMediaType:(id)a0;
+ (id)descriptorWithPersistentIdentifier:(id)a0 mediaType:(id)a1;
+ (id)collectionsOrItemsFromQuery:(id)a0 forMediaType:(id)a1;
+ (id)descriptorForMPMediaEntity:(id)a0 mediaType:(id)a1;
+ (id)playbackArchiveDataJSONTransformer;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)collectionForPlayback;
- (id)initWithMediaItemName:(id)a0 persistentIdentifier:(id)a1 mediaType:(id)a2;
- (id)initWithMediaItemName:(id)a0 playbackArchiveData:(id)a1;

@end
