@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject

@property (retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS;

+ (id)instance;
+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_ { unsigned long long x0; })a0 datetimeType:(struct SGMFoundInAppsDatetimeType_ { unsigned long long x0; })a1;

- (id)init;
- (void).cxx_destruct;

@end
