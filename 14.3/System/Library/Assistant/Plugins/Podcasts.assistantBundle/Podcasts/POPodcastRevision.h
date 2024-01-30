@class NSString;

@interface POPodcastRevision : NSObject

@property (nonatomic) unsigned long long revisionID;
@property (nonatomic) long long revisionType;
@property (retain, nonatomic) NSString *objectID;
@property BOOL isPodcastCollection;

- (void).cxx_destruct;
- (id)description;
- (id)deletedModelObject;

@end
