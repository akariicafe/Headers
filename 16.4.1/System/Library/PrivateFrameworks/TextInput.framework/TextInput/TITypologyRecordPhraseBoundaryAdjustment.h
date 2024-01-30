@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord

@property (nonatomic) BOOL forwardAdjustment;
@property (nonatomic) int granularity;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)replaceDocumentState:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;
- (id)currentKeyboardState;

@end
