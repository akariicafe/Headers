@class NSString;

@interface SAHomeCommunicationAnnouncementSnippet : SAUISnippet

@property (copy, nonatomic) NSString *announcerName;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
