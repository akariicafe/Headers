@class _SWCollaborationMetadata;

@interface _SWStartCollaborationAction : SWStartCollaborationAction

@property (readonly, nonatomic) _SWCollaborationMetadata *collaborationMetadata;

- (void)fulfillWithURL:(id)a0 updatedMetadata:(id)a1;

@end
