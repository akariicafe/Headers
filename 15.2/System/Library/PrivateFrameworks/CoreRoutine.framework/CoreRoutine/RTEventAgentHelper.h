@class NSString;

@interface RTEventAgentHelper : NSObject

@property (retain, nonatomic) NSString *restorationIdentifier;

+ (BOOL)launchdManaged;
+ (id)signingIdentifierFromSelf;

- (id)initWithRestorationIdentifier:(id)a0;
- (void).cxx_destruct;

@end
