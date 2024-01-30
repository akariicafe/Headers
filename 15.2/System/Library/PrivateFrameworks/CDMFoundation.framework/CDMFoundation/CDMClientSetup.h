@class NSString, NSLocale;

@interface CDMClientSetup : NSObject

@property (retain) NSLocale *localeIdentifier;
@property (retain) NSString *sandboxId;
@property (retain) NSString *activeServiceGraph;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1 activeServiceGraph:(id)a2;

@end
