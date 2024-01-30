@class NSString, NSOutputStream;

@interface ARBVHExporter : NSObject {
    NSString *_filePath;
    NSString *_tmpFilePath;
    int _numberFrames;
    void /* unknown type, empty encoding */ _scale;
    long long _exportType;
    NSOutputStream *_framesStreamToFile;
}

@property (readonly, nonatomic) BOOL running;

+ (id)headerByApplyingScale:(SEL)a0;
+ (id)liftedSkeletonHeaderByApplyingScale:(SEL)a0;
+ (id)stickFigureHeaderByApplyingScale:(SEL)a0;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)appendBodyAnchor:(id)a0;
- (id)initWithFilePath:(SEL)a0 type:(id)a1 scale:(long long)a2;

@end
