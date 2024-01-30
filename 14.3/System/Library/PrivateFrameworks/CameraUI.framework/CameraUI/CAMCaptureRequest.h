@class NSString, NSURL, CLLocation, CLHeading, CAMAnalyticsCaptureEvent;

@interface CAMCaptureRequest : NSObject <NSCopying, CAMDistinctPersistenceCopying>

@property (readonly, nonatomic) long long videoEncodingBehavior;
@property (readonly, nonatomic) long long photoEncodingBehavior;
@property (readonly, nonatomic) long long origin;
@property (readonly, nonatomic) unsigned int assertionIdentifier;
@property (readonly, nonatomic) BOOL capturedFromPhotoBooth;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CLHeading *heading;
@property (readonly, nonatomic) long long persistenceOptions;
@property (readonly, nonatomic) unsigned long long deferredPersistenceOptions;
@property (readonly, nonatomic) long long temporaryPersistenceOptions;
@property (readonly, copy, nonatomic) NSURL *localDestinationURL;
@property (readonly, copy, nonatomic) NSString *persistenceUUID;
@property (readonly, nonatomic) BOOL shouldPersistToIncomingDirectory;
@property (readonly, nonatomic) BOOL shouldProtectPersistence;
@property (readonly, nonatomic) BOOL shouldProtectPersistenceForVideo;
@property (readonly, nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (readonly, nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (readonly, nonatomic) BOOL shouldDelayRemotePersistence;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long captureOrientation;
@property (readonly, nonatomic, getter=isCaptureMirrored) BOOL captureMirrored;
@property (readonly, nonatomic) long long captureDevice;
@property (readonly, nonatomic) long long captureDevicePosition;
@property (readonly, nonatomic) long long captureMode;
@property (readonly, nonatomic) long long pressType;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, nonatomic) CAMAnalyticsCaptureEvent *analyticsEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPersistToIncomingDirectoryWithPersistenceOptions:(long long)a0 temporaryPersistenceOptions:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 distinctPersistence:(BOOL)a1;
- (id)initWithType:(long long)a0;
- (id)distinctPersistenceCopy;

@end
