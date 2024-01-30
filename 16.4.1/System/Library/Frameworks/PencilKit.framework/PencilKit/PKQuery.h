@class PKRecognitionSessionManager;

@interface PKQuery : NSObject

@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (weak, nonatomic) id delegate;

- (void)pause;
- (void)teardown;
- (void)start;
- (void).cxx_destruct;
- (id)initWithRecognitionSessionManager:(id)a0;

@end
