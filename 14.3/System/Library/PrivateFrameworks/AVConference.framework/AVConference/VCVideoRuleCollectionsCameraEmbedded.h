@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)dealloc;
- (double)preferredAspectRatio;
- (id)description;
- (void)initSupportedPayloads;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (id)initWithHardwareSettings:(id)a0;
- (struct _VCBitrateConfiguration { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } *)bitrateConfiguration;
- (BOOL)isPreferredVideoRule:(id)a0 preferredFormat:(id)a1;
- (struct _VCHardwareConfiguration { long long x0; struct _VCVideoFormat { unsigned int x0; unsigned int x1; unsigned int x2; } x1; unsigned int x2; struct _VCVideoFormat *x3; unsigned int x4; struct _VCVideoFormat *x5; struct _VCBitrateConfiguration { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x6; } *)hardwareConfigurationForPayload:(int)a0 transportType:(unsigned char)a1;
- (BOOL)setupVideoRulesForPayload:(int)a0 transportType:(unsigned char)a1 encodingType:(unsigned char)a2 formatList:(struct _VCVideoFormat { unsigned int x0; unsigned int x1; unsigned int x2; } *)a3 formatListCount:(unsigned int)a4 preferredFormat:(id)a5 supportsHighDef:(BOOL *)a6;
- (BOOL)supportsHEVCWifiDecoding;
- (BOOL)supportsHEVCWifiEncoding;

@end
