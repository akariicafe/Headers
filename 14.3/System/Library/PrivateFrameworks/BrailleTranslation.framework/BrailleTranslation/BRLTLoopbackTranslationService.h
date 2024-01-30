@class BRLTSLoopbackTranslationService;

@interface BRLTLoopbackTranslationService : BRLTTranslationService

@property (retain, nonatomic) BRLTSLoopbackTranslationService *loopbackService;

- (void).cxx_destruct;
- (BOOL)isLoopback;
- (id)initWithServiceIdentifier:(id)a0 connection:(id)a1 loopbackService:(id)a2;

@end
