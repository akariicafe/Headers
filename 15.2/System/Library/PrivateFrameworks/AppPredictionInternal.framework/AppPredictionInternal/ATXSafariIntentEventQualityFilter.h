@class ATXContextKitClient;

@interface ATXSafariIntentEventQualityFilter : NSObject

@property (readonly, nonatomic) ATXContextKitClient *ckClient;

- (BOOL)shouldAcceptSafariDonation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContextKitClient:(id)a0;
- (BOOL)shouldBlockURLForObjectionableContent:(id)a0;

@end
