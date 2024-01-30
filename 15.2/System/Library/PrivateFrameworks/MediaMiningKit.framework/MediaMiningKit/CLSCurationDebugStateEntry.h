@class NSString;

@interface CLSCurationDebugStateEntry : NSObject

@property (readonly) unsigned long long state;
@property (readonly) NSString *reason;
@property (readonly) NSString *agent;
@property (readonly) NSString *stage;

- (void).cxx_destruct;
- (id)initWithState:(unsigned long long)a0 reason:(id)a1 agent:(id)a2 stage:(id)a3;

@end
