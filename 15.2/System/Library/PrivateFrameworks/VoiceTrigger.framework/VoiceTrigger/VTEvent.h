@class NSURL, NSDictionary;

@interface VTEvent : NSObject

@property (readonly, nonatomic) NSURL *jsonFileUrl;
@property (readonly, nonatomic) NSDictionary *voiceTriggerEventInfo;

+ (id)eventFromURL:(id)a0;
+ (long long)eventTypeFromURL:(id)a0;

- (void).cxx_destruct;
- (id)timestampString;
- (id)_packNumberFomVTEventInfo:(id)a0 key:(id)a1 format:(id)a2;
- (id)_buildTitle;
- (id)_buildContent;
- (id)_buildDetail;
- (id)_buildTriggerContent;
- (id)_packAudioURLFromVTEventInfo:(id)a0 key:(id)a1;
- (id)_packStringContent:(id)a0 value:(id)a1;
- (id)_buildTriggerDetail;
- (id)eventTrackerDictionary;
- (id)initWithEventLogURL:(id)a0;
- (void)_readJsonFile:(id)a0;
- (id)jsonFileName;
- (id)_packStringFromVTEventInfo:(id)a0 key:(id)a1;
- (id)_packAudioContent:(id)a0 filepath:(id)a1;
- (id)_packBooleanFromVTEventInfo:(id)a0 key:(id)a1;

@end
