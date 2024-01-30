@protocol BKFaceDetectOperationDelegate;

@interface BKFaceDetectOperation : BKPresenceDetectOperation

@property (nonatomic) long long mode;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL highPriority;
@property (weak, nonatomic) id<BKFaceDetectOperationDelegate> delegate;

- (id)initWithDevice:(id)a0;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;

@end
