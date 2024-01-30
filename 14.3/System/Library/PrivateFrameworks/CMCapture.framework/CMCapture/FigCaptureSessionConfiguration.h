@class NSArray, NSString, NSMutableArray;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSMutableArray *_connections;
}

@property (nonatomic) long long configurationID;
@property (readonly, nonatomic) NSArray *connectionConfigurations;
@property (readonly, nonatomic) NSArray *sourceConfigurations;
@property (readonly, nonatomic) NSArray *sinkConfigurations;
@property (retain, nonatomic) NSString *sessionPreset;
@property (nonatomic) BOOL usesAppAudioSession;
@property (nonatomic) BOOL configuresAppAudioSession;
@property (nonatomic) BOOL allowedToRunInWindowedLayout;
@property (nonatomic, getter=isMultiCamSession) BOOL multiCamSession;
@property (nonatomic) BOOL xctestAuthorizedToStealDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addConnectionConfiguration:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)removeConnectionConfiguration:(id)a0;

@end
