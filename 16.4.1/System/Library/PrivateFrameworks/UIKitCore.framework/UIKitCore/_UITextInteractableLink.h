@class NSURL, LSAppLink;

@interface _UITextInteractableLink : _UITextInteractableItem

@property (retain, nonatomic) NSURL *link;
@property (retain, nonatomic) LSAppLink *appLink;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLink;

@end
