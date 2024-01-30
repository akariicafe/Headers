@class NSString, PLPillContentWrapperView, UIView, NSAttributedString;

@interface PLPillContentItem : NSObject {
    BOOL _solo;
    PLPillContentWrapperView *_wrapperView;
    id _text;
}

@property (weak, nonatomic) PLPillContentWrapperView *wrapperView;
@property (readonly, nonatomic, getter=isSolo) BOOL solo;
@property (readonly, copy, nonatomic, getter=_identifier) NSString *identifier;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) UIView *accessoryView;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)hash;
- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithText:(id)a0 style:(unsigned long long)a1;
- (id)debugDescription;
- (id)initWithAttributedText:(id)a0;
- (id)initWithAttributedText:(id)a0 style:(unsigned long long)a1;
- (void)updateWithContentItem:(id)a0;
- (id)soloItem;
- (BOOL)isLikePillContentItem:(id)a0;
- (id)_initWithIdentifier:(id)a0 text:(id)a1 style:(unsigned long long)a2 accessoryView:(id)a3 solo:(BOOL)a4;
- (id)initWithAccessoryView:(id)a0;
- (id)initWithText:(id)a0 style:(unsigned long long)a1 accessoryView:(id)a2;
- (id)initWithAttributedText:(id)a0 style:(unsigned long long)a1 accessoryView:(id)a2;
- (id)itemWithText:(id)a0;
- (id)itemWithAttributedText:(id)a0;
- (id)itemWithStyle:(unsigned long long)a0;
- (id)itemWithText:(id)a0 style:(unsigned long long)a1;
- (id)itemWithAttributedText:(id)a0 style:(unsigned long long)a1;
- (id)itemWithText:(id)a0 style:(unsigned long long)a1 accessoryView:(id)a2;
- (id)itemWithAttributedText:(id)a0 style:(unsigned long long)a1 accessoryView:(id)a2;

@end
