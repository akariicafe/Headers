@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (BOOL)asynchRequestResourceAccess:(BOOL)a0;
- (BOOL)synchRequestResourceAccess;
- (void)releaseResourceAccess;
- (void).cxx_destruct;

@end
