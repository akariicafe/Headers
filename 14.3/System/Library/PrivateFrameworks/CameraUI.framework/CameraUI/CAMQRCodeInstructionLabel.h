@class NSArray;

@interface CAMQRCodeInstructionLabel : CAMInstructionLabel

@property (nonatomic) long long devicePosition;
@property (retain, nonatomic, setter=setMRCResults:) NSArray *mrcResults;

+ (BOOL)shouldDisplayInstructionForMRCResults:(id)a0 devicePosition:(long long)a1;
+ (id)_textForMRCResults:(id)a0 devicePosition:(long long)a1;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextWithPriorMRCResults:(id)a0;

@end
