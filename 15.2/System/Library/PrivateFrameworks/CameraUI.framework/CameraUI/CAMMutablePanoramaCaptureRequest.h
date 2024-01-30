@class NSString, NSURL, CAMAnalyticsCaptureEvent, CLLocation, CLHeading;
@protocol CAMPanoramaCaptureRequestDelegate;

@interface CAMMutablePanoramaCaptureRequest : CAMPanoramaCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior>

@property (weak, nonatomic) id<CAMPanoramaCaptureRequestDelegate> delegate;
@property (nonatomic) long long captureOrientation;
@property (nonatomic) long long captureDevice;
@property (nonatomic) long long captureMode;
@property (nonatomic) long long pressType;
@property (nonatomic) unsigned short sessionIdentifier;
@property (retain, nonatomic) CAMAnalyticsCaptureEvent *analyticsEvent;
@property (nonatomic) long long persistenceOptions;
@property (nonatomic) unsigned long long deferredPersistenceOptions;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (copy, nonatomic) NSURL *localDestinationURL;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (nonatomic) BOOL shouldDelayRemotePersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLHeading *heading;
@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic) long long origin;
@property (nonatomic) long long videoEncodingBehavior;
@property (nonatomic) long long photoEncodingBehavior;

- (void)setPressType:(long long)a0;
- (void)setSessionIdentifier:(unsigned short)a0;
- (void)setCaptureDevice:(long long)a0;
- (void)setCaptureMode:(long long)a0;
- (void)setAnalyticsEvent:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setCaptureOrientation:(long long)a0;
- (void)setDelegate:(id)a0;
- (id)analyticsEvent;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
