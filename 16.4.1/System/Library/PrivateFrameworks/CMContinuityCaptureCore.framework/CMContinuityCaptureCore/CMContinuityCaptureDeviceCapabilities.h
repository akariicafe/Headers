@class NSArray, NSString;

@interface CMContinuityCaptureDeviceCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable>

@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) NSArray *streamFormats;
@property (readonly, nonatomic) NSArray *controls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_resolvedControlsForEntityType:(long long)a0;
+ (id)_resolvedStreamFormatsForEntityType:(long long)a0;
+ (BOOL)avcaptureDeviceSupportsStudioLighting:(id)a0;
+ (id)capabilitiesForEntityType:(long long)a0;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntityType:(long long)a0 streamFormats:(id)a1 controls:(id)a2;

@end
