@class NSSet, NSMutableDictionary;

@interface BRRemoteUserDefaults : NSObject {
    NSMutableDictionary *_userDictionaryCache;
}

@property (readonly, nonatomic) NSSet *excludedFilenamesWorthWarningAtLogout;
@property (readonly, nonatomic) NSSet *excludedExtensionsWorthPreserving;
@property (readonly, nonatomic) long long minFileSizeForThumbnailTransfer;

+ (id)defaultExcludedFilenamesWorthWarningAtLogout;
+ (id)defaultExcludedExtensionsWorthPreserving;
+ (id)defaultExcludedFilenamesWorthPreserving;
+ (id)sharedDefaults;

- (id)init;
- (void).cxx_destruct;
- (id)_init;

@end
