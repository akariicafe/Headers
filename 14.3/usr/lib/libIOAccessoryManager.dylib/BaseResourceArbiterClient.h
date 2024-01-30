@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (void).cxx_destruct;
- (void)releaseResourceAccess;
- (BOOL)synchRequestResourceAccess;
- (BOOL)asynchRequestResourceAccess:(BOOL)a0;

@end
