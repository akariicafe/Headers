@class FCFeedViewport, NSString, FCFeedDescriptor, FCFeedViewportDiff;

@interface FCFeedViewportRemoveGroupOperation : FCOperation <FCFeedViewportRemoveGroupOperationType>

@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *viewportDiff;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) id /* block */ removeGroupCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
