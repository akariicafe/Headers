@class NSNumber, NSString;

@interface VCScreenShare : NSObject

@property (retain, nonatomic) NSNumber *clientPID;
@property (retain, nonatomic) NSString *selectiveScreenUUID;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int frameRate;
@property (readonly, nonatomic) unsigned int screenCaptureDisplayID;
@property (readonly, nonatomic) BOOL isWindowed;
@property (readonly, nonatomic) unsigned int selectiveSharingPort;

- (void)dealloc;
- (id)initWithConfig:(id)a0 pid:(id)a1;
- (void)setConfig:(id)a0 pid:(id)a1;
- (void)updateScreenShareWith:(id)a0 pid:(id)a1;

@end
