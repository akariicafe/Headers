@class FigCaptureStillImageSettings;

@interface AVCapturePrepareBracketRequest : NSObject

@property (readonly) FigCaptureStillImageSettings *settings;
@property (readonly) id /* block */ completionBlock;

+ (id)prepareBracketRequestWithCompletionBlock:(id /* block */)a0 settings:(id)a1;

- (void)dealloc;
- (id)_initWithCompletionBlock:(id /* block */)a0 settings:(id)a1;

@end
