@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {
    UIColor *_errorColor;
}

@property (nonatomic) BOOL hasError;

- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
