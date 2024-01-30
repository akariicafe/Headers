@class NSMutableSet;

@interface CAMAnalyticsVisionSession : CAMAnalyticsEvent

@property (readonly, nonatomic, getter=_isTextDetectionEnabled) BOOL _textDetectionEnabled;
@property (readonly, nonatomic, getter=_isMRCDetectionEnabled) BOOL _MRCDetectionEnabled;
@property (nonatomic, setter=_setStartTime:) double _startTime;
@property (nonatomic, setter=_setTextButtonPressCount:) unsigned long long _textButtonPressCount;
@property (nonatomic, setter=_setQRButtonPressCount:) unsigned long long _qrButtonPressCount;
@property (nonatomic, setter=_setAppClipButtonPressCount:) unsigned long long _appClipButtonPressCount;
@property (nonatomic, setter=_setQRPillPressCount:) unsigned long long _qrPillPressCount;
@property (nonatomic, setter=_setAppClipPillPressCount:) unsigned long long _appClipPillPressCount;
@property (nonatomic, setter=_setMaxTextRegionCount:) unsigned long long _maxTextRegionCount;
@property (nonatomic, setter=_setMaxQRCodeCount:) unsigned long long _maxQRCodeCount;
@property (nonatomic, setter=_setMaxAppClipCodeCount:) unsigned long long _maxAppClipCodeCount;
@property (retain, nonatomic, setter=_setPressedMRCTypes:) NSMutableSet *_pressedQRTypes;

- (void).cxx_destruct;
- (id)eventName;
- (void)publish;
- (void)_countMRCTypeForAction:(id)a0;
- (long long)_bucketedCount:(long long)a0;
- (id)_analyticsValueForQRTypes:(id)a0;
- (id)_analyticsValueForQRType:(long long)a0;
- (id)initWithTextDetectionEnabled:(BOOL)a0 MRCDetectionEnabled:(BOOL)a1;
- (void)countTextButtonPress;
- (void)countButtonPressForMRC:(id)a0 action:(id)a1;
- (void)countPillPressForMRC:(id)a0 action:(id)a1;
- (void)countObservedSignficantTextRegionCount:(unsigned long long)a0;
- (void)countObservedSignficantMRCs:(id)a0;

@end
