@class PKApplicationMessageView, PKApplicationMessageNode;

@interface PKApplicationMessageViewContext : NSObject {
    BOOL _userExpanded;
    PKApplicationMessageNode *_node;
    PKApplicationMessageView *_view;
    unsigned long long _numberOfAdditionalSubviews;
}

- (id)init;

@end
