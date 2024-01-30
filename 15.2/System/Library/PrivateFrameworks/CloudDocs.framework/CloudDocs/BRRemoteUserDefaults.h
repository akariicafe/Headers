@class NSSet, NSMutableDictionary;

@interface BRRemoteUserDefaults : NSObject {
    NSMutableDictionary *_userDictionaryCache;
}

@property (readonly, nonatomic) NSSet *excludedFilenamesWorthWarningAtLogout;
@property (readonly, nonatomic) NSSet *excludedExtensionsWorthPreserving;
@property (readonly, nonatomic) long long minFileSizeForThumbnailTransfer;

+ (id)sharedDefaults;
+ (id)defaultExcludedFilenamesWorthWarningAtLogout;
+ (id)defaultExcludedExtensionsWorthPreserving;
+ (id)defaultExcludedFilenamesWorthPreserving;

- (void).cxx_destruct;
- (id)init;
- (id)_init;

@end
