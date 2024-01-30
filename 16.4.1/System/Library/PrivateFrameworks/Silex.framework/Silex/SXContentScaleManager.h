@class NSString;
@protocol SXContentScaleManagerDelegate;

@interface SXContentScaleManager : NSObject <SXContentScaleManager>

@property (nonatomic) long long contentScale;
@property (readonly, nonatomic) double contentScaleFactor;
@property (weak, nonatomic) id<SXContentScaleManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)decrease;
- (void)increase;
- (id)initWithContentScale:(long long)a0;

@end
