@interface IEIntelligence : NSObject

@property (nonatomic) struct TtIntelligence { struct Impl *x0; } *mIntelligence;

- (void)load:(id)a0;
- (BOOL)isActive;
- (id)init;
- (void)dealloc;
- (id)startConversation;
- (id)processIntent:(id)a0;

@end
