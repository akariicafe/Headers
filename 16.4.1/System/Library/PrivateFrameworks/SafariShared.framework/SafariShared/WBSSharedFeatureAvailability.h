@interface WBSSharedFeatureAvailability : NSObject

@property (class, nonatomic, setter=setLocalSiriSuggestionsEnabled:) BOOL areLocalSiriSuggestionsEnabled;
@property (class, readonly, nonatomic) BOOL areSiriSearchSuggestionsEnabled;

+ (id)safariApplicationPlatformBundleIdentifier;

@end
