@class CSAudioRecordContext, NSObject;
@protocol OS_xpc_object;

@interface CSAudioStreamRequest : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (retain, nonatomic) CSAudioRecordContext *recordContext;
@property (nonatomic) BOOL requiresHistoricalBuffer;
@property (nonatomic) BOOL useCustomizedRecordSettings;
@property (nonatomic) long long audioFormat;
@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int lpcmBitDepth;
@property (nonatomic) BOOL lpcmIsFloat;
@property (nonatomic) unsigned int numberOfChannels;
@property (nonatomic) unsigned int encoderBitRate;
@property (nonatomic) BOOL isSiri;

+ (id)defaultRequestWithContext:(id)a0;
+ (id)requestForLpcmRecordSettingsWithContext:(id)a0;
+ (id)requestForOpusRecordSettingsWithContext:(id)a0;
+ (id)requestForSpeexRecordSettingsWithContext:(id)a0;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;

@end
