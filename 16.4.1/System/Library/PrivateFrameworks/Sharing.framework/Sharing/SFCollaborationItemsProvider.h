@class NSArray, NSString, NSURL, _SFCollaborationItemsRequest;
@protocol SFCollaborationItemsProviderDelegate;

@interface SFCollaborationItemsProvider : NSObject <_SFCollaborationItemsRequestDelegate>

@property (copy, nonatomic) NSArray *collaborationItems;
@property (retain, nonatomic) _SFCollaborationItemsRequest *currentRequest;
@property (readonly, nonatomic) BOOL supportsMultipleCollaboration;
@property (readonly, nonatomic) NSURL *managedFileURL;
@property (copy, nonatomic) NSArray *activityItems;
@property (weak, nonatomic) id<SFCollaborationItemsProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL multipleCollaborationItems;
@property (readonly, copy, nonatomic) NSArray *placeholderActivityItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActivityItems:(id)a0 delegate:(id)a1 managedFileURL:(id)a2;
- (void)_didCompleteCollaborationItems:(id)a0;
- (id)initWithActivityItems:(id)a0 delegate:(id)a1;
- (void)_updateCollaborationItems;
- (id)activityItemsForActivity:(id)a0 collaborationResult:(id)a1;
- (id)activityItemsForActivity:(id)a0 collaborationResult:(id)a1 isCollaborative:(BOOL)a2;
- (id)collaborationItemForActivityItem:(id)a0;
- (id)collaborationItemsRequest:(id)a0 resolveActivityItem:(id)a1;
- (id)collaborationServiceForItemsRequest:(id)a0;

@end
