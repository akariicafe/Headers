@class NSString;

@interface WK_RTCDefaultVideoDecoderFactory : NSObject <RTCVideoDecoderFactory> {
    BOOL _supportsH265;
    BOOL _supportsVP9;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedCodecs;
- (id)createDecoder:(id)a0;
- (id)initWithH265:(BOOL)a0 vp9:(BOOL)a1;

@end
