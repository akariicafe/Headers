@class NSString, AVTAttributeValueView, UIView;

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent>

@property (retain, nonatomic) UIView *attributeView;
@property (readonly, nonatomic) AVTAttributeValueView *valueView;
@property (copy, nonatomic) id /* block */ discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

@end
