@class NSMutableDictionary;

@interface AXAuditPreferenceController : NSObject

@property (class, readonly, nonatomic) AXAuditPreferenceController *sharedController;

@property (retain, nonatomic) NSMutableDictionary *preferenceDictionary;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setSpinRunloop:(BOOL)a0;
- (BOOL)spinRunloop;

@end
