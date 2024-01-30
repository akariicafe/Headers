@class ATXContextKitClient;

@interface ATXSafariIntentEventQualityFilter : NSObject

@property (readonly, nonatomic) ATXContextKitClient *ckClient;

- (BOOL)shouldAcceptSafariDonation:(id)a0;
- (BOOL)shouldBlockURLForObjectionableContent:(id)a0;
- (id)initWithContextKitClient:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
