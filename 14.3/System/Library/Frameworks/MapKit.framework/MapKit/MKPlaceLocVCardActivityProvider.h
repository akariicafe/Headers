@class NSString, CNContact;

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider <UIActivityItemSource>

@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewController:(id)a0 attachmentNameForActivityType:(id)a1;
- (id)initWithMapItem:(id)a0 contact:(id)a1;

@end
