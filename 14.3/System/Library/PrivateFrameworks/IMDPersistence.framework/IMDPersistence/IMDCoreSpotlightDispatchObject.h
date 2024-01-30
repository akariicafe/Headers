@class CRRecentContactsLibrary;

@interface IMDCoreSpotlightDispatchObject : NSObject

@property (nonatomic) CRRecentContactsLibrary *recentsInstance;
@property (nonatomic) BOOL allowsOverrideOfObjects;
@property (nonatomic) BOOL shouldAddToSuggestions;
@property (nonatomic) BOOL shouldAddToSpotlight;
@property (nonatomic) BOOL shouldAddToCoreRecents;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;

@end
