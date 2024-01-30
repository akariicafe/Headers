@interface NewsArticles.SharingTagTextActivityItemSource : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ itemTitle;
}

- (id)init;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;

@end
