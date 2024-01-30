@class PKDashboardMessagesView;

@interface PKPassMessageFooterContentView : PKPassFooterContentView {
    PKDashboardMessagesView *_messagesView;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithPass:(id)a0;
- (void)updateWithMessages:(id)a0;

@end
