@class NSString;

@interface ICTagAllTagsItemIdentifier : NSObject

@property (class, readonly, nonatomic) ICTagAllTagsItemIdentifier *sharedItemIdentifier;
@property (class, readonly, copy, nonatomic) NSString *displayText;
@property (class, readonly, copy, nonatomic) NSString *archiveIdentifier;

@end
