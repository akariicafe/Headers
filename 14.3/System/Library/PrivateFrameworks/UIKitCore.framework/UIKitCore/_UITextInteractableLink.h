@class NSURL, LSAppLink;

@interface _UITextInteractableLink : _UITextInteractableItem

@property (retain, nonatomic) NSURL *link;
@property (retain, nonatomic) LSAppLink *appLink;

- (BOOL)isLink;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
