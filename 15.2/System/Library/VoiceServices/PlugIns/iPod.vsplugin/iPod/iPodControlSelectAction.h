@class MPMediaQuery;

@interface iPodControlSelectAction : iPodControlSimpleAction {
    MPMediaQuery *_query;
}

- (id)initWithQuery:(id)a0;
- (void).cxx_destruct;
- (id)performSimpleAction;

@end
