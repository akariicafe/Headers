@class NSString, SAMPCollection;

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;
@property (retain, nonatomic) SAMPCollection *mediaItems;

+ (id)addMediaItemsToLibrary;
+ (id)addMediaItemsToLibraryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
