@class NSString, SAMPCollection;

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;
@property (retain, nonatomic) SAMPCollection *mediaItems;

+ (id)addMediaItemsToLibraryWithDictionary:(id)a0 context:(id)a1;
+ (id)addMediaItemsToLibrary;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
