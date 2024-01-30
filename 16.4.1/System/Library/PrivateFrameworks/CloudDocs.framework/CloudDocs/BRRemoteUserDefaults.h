@class NSSet, NSMutableDictionary;

@interface BRRemoteUserDefaults : NSObject {
    NSMutableDictionary *_userDictionaryCache;
}

@property (readonly, nonatomic) NSSet *excludedFilenamesWorthWarningAtLogout;
@property (readonly, nonatomic) NSSet *excludedExtensionsWorthPreserving;
@property (readonly, nonatomic) long long minFileSizeForThumbnailTransfer;

+ (id)sharedDefaults;
+ (id)defaultExcludedExtensionsWorthPreserving;
+ (id)defaultExcludedFilenamesWorthPreserving;
+ (id)defaultExcludedFilenamesWorthWarningAtLogout;

- (id)_init;
- (id)init;
- (void).cxx_destruct;

@end
