@class NSString, NSArray;

@interface SACFAbstractClientCommand : SADomainCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *jsFileNameSuffix;
@property (copy, nonatomic) NSArray *jsLibraries;
@property (copy, nonatomic) NSString *jsParameters;
@property (copy, nonatomic) NSString *jsScript;
@property (nonatomic) BOOL shouldCacheBytecode;
@property (nonatomic) BOOL shouldCacheScript;
@property (nonatomic) BOOL shouldRestartContext;

+ (id)abstractClientCommand;
+ (id)abstractClientCommandWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
