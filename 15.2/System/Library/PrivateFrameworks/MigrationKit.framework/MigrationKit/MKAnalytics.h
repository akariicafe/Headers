@class MKPayload;

@interface MKAnalytics : NSObject

@property (retain, nonatomic) MKPayload *payload;

- (void)send;
- (void).cxx_destruct;
- (id)init;
- (void)send:(id)a0 payload:(id)a1;

@end
