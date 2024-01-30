@class NSString;
@protocol AMSBagProtocol;

@interface MTConfigAMSMetricsDelegate : NSObject <MTConfigDelegate>

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sources;
- (void).cxx_destruct;
- (id)initWithAMSBag:(id)a0;

@end
