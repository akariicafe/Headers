@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject

@property (retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS;

+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_ { unsigned long long x0; })a0 datetimeType:(struct SGMFoundInAppsDatetimeType_ { unsigned long long x0; })a1;
+ (id)instance;

- (id)init;
- (void).cxx_destruct;

@end
