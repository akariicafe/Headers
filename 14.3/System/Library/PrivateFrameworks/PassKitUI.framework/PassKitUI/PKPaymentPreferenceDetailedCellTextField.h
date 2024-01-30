@class UIColor;

@interface PKPaymentPreferenceDetailedCellTextField : UITextField {
    UIColor *_defaultColor;
    UIColor *_invalidColor;
}

@property (nonatomic) BOOL isInvalid;

- (id)init;
- (void).cxx_destruct;

@end
