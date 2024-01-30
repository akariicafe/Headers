@class PKDashboardMessagesView;

@interface PKPassMessageFooterContentView : PKPassFooterContentView {
    PKDashboardMessagesView *_messagesView;
}

- (void)layoutSubviews;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (void)updateWithMessages:(id)a0;

@end
