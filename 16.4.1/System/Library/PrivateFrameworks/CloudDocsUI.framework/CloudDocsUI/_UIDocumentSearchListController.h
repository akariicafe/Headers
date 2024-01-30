@class NSString, _UIDocumentPickerSearchContainerModel;

@interface _UIDocumentSearchListController : _UIDocumentListController {
    _UIDocumentPickerSearchContainerModel *_model;
}

@property (retain, nonatomic) NSString *queryString;

+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;

- (id)initWithModel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hideSearchField;
- (Class)_classForChildren;
- (void)itemsOrSelectionDidChange:(BOOL)a0;

@end
