@class NSString, UIView;

@interface _FCUIActivityControlBackgroundView : UIView <FCUIHighlighting> {
    UIView *_highlightView;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
