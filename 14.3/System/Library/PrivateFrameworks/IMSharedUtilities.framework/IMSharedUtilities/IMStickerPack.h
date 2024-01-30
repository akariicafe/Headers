@class NSString, NSSet, NSURL, NSMutableSet;

@interface IMStickerPack : NSObject {
    NSMutableSet *_stickers;
}

@property (copy, nonatomic) NSString *GUID;
@property (readonly, nonatomic) NSSet *stickers;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *displayAssetURL;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *appVersion;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)addSticker:(id)a0;
- (id)initWithGUID:(id)a0 name:(id)a1 displayAssetURL:(id)a2 fileURL:(id)a3 appBundleIdentifier:(id)a4 appVersion:(id)a5;
- (id)_generatePackGUIDWithPackID:(id)a0 appBundleID:(id)a1 appVersion:(id)a2;
- (id)initWithStickerPackProperties:(id)a0 stickerPackBundleURL:(id)a1 appBundleIdentifier:(id)a2 appVersion:(id)a3;
- (id)initWithDictionary:(id)a0;

@end
