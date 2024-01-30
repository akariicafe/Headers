@class NSError, SSDownloadPhase, NSString;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying>

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isContentRestricted) BOOL contentRestricted;
@property (nonatomic, getter=isFailed) BOOL failed;
@property (nonatomic, getter=isPausable) BOOL pausable;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isFailedTransient) BOOL failedTransient;
@property (readonly, nonatomic) SSDownloadPhase *activePhase;
@property (readonly, nonatomic) float percentComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOperationType:(long long)a0;
- (id)initWithXPCEncoding:(id)a0;
- (void)setPercentComplete:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (void)setOperationProgress:(id)a0;

@end
