@class PKRecognitionSessionManager;

@interface PKQuery : NSObject

@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (weak, nonatomic) id delegate;

- (void)teardown;
- (void)start;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithRecognitionSessionManager:(id)a0;

@end
