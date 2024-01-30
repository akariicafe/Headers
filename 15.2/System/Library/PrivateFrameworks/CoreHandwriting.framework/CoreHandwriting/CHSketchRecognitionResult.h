@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult

@property (readonly) NSString *string;
@property (readonly) double rotation;

- (void)dealloc;
- (id)initWithString:(id)a0 score:(double)a1 rotation:(double)a2;

@end
