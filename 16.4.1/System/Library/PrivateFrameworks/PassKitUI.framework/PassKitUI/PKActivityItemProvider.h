@class PKPass, PKLinkedApplication, PKPassView;

@interface PKActivityItemProvider : UIActivityItemProvider {
    PKPass *_pass;
    PKPassView *_passView;
    PKLinkedApplication *_linkedApp;
    long long _sharingMethod;
}

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPass:(id)a0 passView:(id)a1 linkedApp:(id)a2 sharingMethod:(long long)a3;

@end
