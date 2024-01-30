@class NSString, NSDictionary, UISearchToken, NSItemProvider;

@interface _UISearchTextFieldPasteItem : UITextPasteItem <UISearchTextFieldPasteItem>

@property (retain, nonatomic, setter=setSearchTokenResult:) UISearchToken *_searchTokenResult;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) id localObject;
@property (readonly, nonatomic) NSDictionary *defaultAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
