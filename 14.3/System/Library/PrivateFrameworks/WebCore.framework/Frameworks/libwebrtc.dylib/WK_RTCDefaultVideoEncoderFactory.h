@class NSString;

@interface WK_RTCDefaultVideoEncoderFactory : NSObject <RTCVideoEncoderFactory> {
    BOOL _supportsH265;
    BOOL _supportsVP9;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedCodecs;
+ (id)supportedCodecsWithH265:(BOOL)a0 vp9:(BOOL)a1;

- (id)supportedCodecs;
- (id)createEncoder:(id)a0;
- (id)initWithH265:(BOOL)a0 vp9:(BOOL)a1;

@end
