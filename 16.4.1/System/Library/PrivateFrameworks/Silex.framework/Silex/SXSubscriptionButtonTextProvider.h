@class NSString;

@interface SXSubscriptionButtonTextProvider : NSObject <SXSubscriptionButtonTextProviding>

@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;

@end
