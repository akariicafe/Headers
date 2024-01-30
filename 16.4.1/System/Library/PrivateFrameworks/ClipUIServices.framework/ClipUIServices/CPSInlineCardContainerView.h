@class NSString, UITapGestureRecognizer, UIView;
@protocol CPSInlineCardViewDelegate;

@interface CPSInlineCardContainerView : UIView <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer *_tapRecognizer;
}

@property (weak, nonatomic) id<CPSInlineCardViewDelegate> delegate;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
