@class NSArray, NSURL, NSMutableArray;
@protocol _SFCollaborationItemsRequestDelegate;

@interface _SFCollaborationItemsRequest : NSObject

@property (weak, nonatomic) id<_SFCollaborationItemsRequestDelegate> delegate;
@property (copy, nonatomic) NSArray *activityItems;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL supportsMultipleCollaboration;
@property (copy, nonatomic) NSURL *managedFileURL;
@property (retain, nonatomic) NSMutableArray *remainingActivityItems;
@property (retain, nonatomic) NSMutableArray *collaborationItems;

- (void)perform;
- (void)cancel;
- (void).cxx_destruct;
- (id)collaborationService;
- (void)_addCollaborationItem:(id)a0;
- (void)_processRemainingActivityItems;
- (id)initWithActivityItems:(id)a0 completionHandler:(id /* block */)a1;

@end
