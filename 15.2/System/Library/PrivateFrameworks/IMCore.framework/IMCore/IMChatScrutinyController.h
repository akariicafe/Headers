@interface IMChatScrutinyController : NSObject

+ (id)sharedController;

- (void)setTranscriptRenderingMetadata:(id)a0 forChatIdentifier:(id)a1;
- (id)transcriptRenderingMetadataForChatIdentifier:(id)a0;
- (void)markMessageAsCorrupt:(id)a0;
- (id)scrutinyInfo;
- (double)_maxDurationForScrutinyMode;
- (void)markMessageAsNotCorrupt:(id)a0;

@end
