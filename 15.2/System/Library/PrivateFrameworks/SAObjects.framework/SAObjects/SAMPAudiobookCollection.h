@class NSString;

@interface SAMPAudiobookCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *sortArtist;

+ (id)audiobookCollection;
+ (id)audiobookCollectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
