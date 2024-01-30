@class NSString;
@protocol SXAction;

@interface SXButtonComponentActionProvider : NSObject <SXButtonComponentActionProvider>

@property (readonly, nonatomic) id<SXAction> action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAction:(id)a0;
- (void).cxx_destruct;

@end
