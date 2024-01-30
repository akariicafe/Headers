@class NSString, ACUISActivityAlertOptions;

@interface ACUISActivityAlertProvider : NSObject <ACUISActivityAlertProviding>

@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSString *payloadIdentifier;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) ACUISActivityAlertOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActivityAlertProviding:(id)a0;
- (long long)_activityAlertAction:(long long)a0;

@end
