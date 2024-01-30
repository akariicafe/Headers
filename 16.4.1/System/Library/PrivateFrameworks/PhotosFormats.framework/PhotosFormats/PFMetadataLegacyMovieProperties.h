@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadataCore {
    NSDictionary *_audioVideoProperties;
}

- (id)nominalFrameRate;
- (id)_makeGPSProperties;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)software;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)_makeGeometryProperties;
- (id)cameraMake;
- (id)_makeDateTimeProperties;
- (id)cameraModel;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)plistForEncoding;
- (id)audioSampleRate;
- (BOOL)isMovie;
- (BOOL)isSloMo;
- (id)audioDataRate;
- (id)audioTrackFormat;
- (id)durationTimeInterval;
- (BOOL)isTimelapse;
- (id)videoCodecName;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (struct opaqueCMFormatDescription { } *)_formatDescription;
- (id)_primaryAudioTrack;
- (id)_primaryVideoTrack;
- (id)audioTrackFormatFlags;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)videoDataRate;

@end
