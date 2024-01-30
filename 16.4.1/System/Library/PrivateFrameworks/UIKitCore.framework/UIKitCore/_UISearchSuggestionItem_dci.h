@class NSString, UIImage, NSAttributedString;

@interface _UISearchSuggestionItem_dci : UISearchSuggestionItem <_UISearchSuggestion_dci>

@property (readonly, nonatomic) NSString *localizedSuggestion;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) NSAttributedString *localizedAttributedSuggestion;
@property (retain, nonatomic) id representedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
