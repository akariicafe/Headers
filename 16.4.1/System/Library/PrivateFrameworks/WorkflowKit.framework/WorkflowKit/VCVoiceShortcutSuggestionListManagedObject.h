@class NSString, NSData;

@interface VCVoiceShortcutSuggestionListManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (retain, nonatomic) NSData *serializedSuggestions;
@property (nonatomic) int shortcutAvailabilityOptions;

+ (id)fetchRequest;

- (id)descriptor;

@end
