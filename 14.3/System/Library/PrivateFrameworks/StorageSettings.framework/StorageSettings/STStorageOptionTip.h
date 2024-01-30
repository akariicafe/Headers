@class NSString, NSObject;
@protocol STStorageOptionTipDelegate;

@interface STStorageOptionTip : STStorageTip

@property (weak) NSObject<STStorageOptionTipDelegate> *delegate;
@property (retain) NSString *enableButtonTitle;
@property (nonatomic) float activationPercent;
@property (retain, nonatomic) NSString *activatingString;
@property (nonatomic) long long immediateGain;
@property (nonatomic) long long eventualGain;
@property BOOL mayCauseDataLoss;
@property (retain) NSString *confirmationText;
@property (retain) NSString *confirmationButtonTitle;

- (id)init;
- (void).cxx_destruct;
- (id)getValue:(id)a0;
- (void)setValue:(id)a0 specifier:(id)a1;
- (void)enableOption;

@end
