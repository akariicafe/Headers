@class PKRecognitionSessionManager;

@interface PKQuery : NSObject

@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (weak, nonatomic) id delegate;

- (void)teardown;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (id)initWithRecognitionSessionManager:(id)a0;

@end
