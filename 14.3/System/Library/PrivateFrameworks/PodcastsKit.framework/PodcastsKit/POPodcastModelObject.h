@class NSString, NSIndexPath, SAMPCollection;

@interface POPodcastModelObject : NSObject

@property (retain) NSString *uuid;
@property (retain) NSString *title;
@property (retain) NSString *feedUrl;
@property (retain) NSIndexPath *indexPath;
@property (readonly) SAMPCollection *SAMPCollection;

+ (id)uriScheme;
+ (Class)SAMPClass;

- (void).cxx_destruct;
- (id)description;

@end
