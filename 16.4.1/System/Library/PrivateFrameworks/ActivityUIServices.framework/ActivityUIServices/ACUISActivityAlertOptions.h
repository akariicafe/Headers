@class TLAlertConfiguration, ACAlertPresentationOptions;

@interface ACUISActivityAlertOptions : NSObject

@property (readonly, nonatomic) TLAlertConfiguration *alertConfiguration;
@property (readonly, nonatomic) ACAlertPresentationOptions *presentationOptions;

- (void).cxx_destruct;
- (id)initWithAlertConfiguration:(id)a0 presentationOptions:(id)a1;

@end
