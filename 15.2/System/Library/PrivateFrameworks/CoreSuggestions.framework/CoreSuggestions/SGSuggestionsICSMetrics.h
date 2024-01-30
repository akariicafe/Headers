@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject

@property (retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS;

+ (id)instance;
+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_ { unsigned long long x0; })a0 datetimeType:(struct SGMFoundInAppsDatetimeType_ { unsigned long long x0; })a1;

- (void).cxx_destruct;
- (id)init;

@end
