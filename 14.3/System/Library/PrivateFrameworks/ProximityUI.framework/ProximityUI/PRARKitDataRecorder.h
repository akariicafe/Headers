@class ARSession, NSURL, NSString;

@interface PRARKitDataRecorder : PRDataRecorderBase <PRItemLocalizerDataRecorder>

@property (retain, nonatomic) ARSession *session;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *filename;

- (void).cxx_destruct;
- (void)start;
- (void)stopAndDiscard;
- (id)stopAndSave;
- (id)initWithARSession:(id)a0;

@end
