@class NSArray, SAHAFilter, NSString, NSNumber;

@interface SAHACommand : SADomainCommand <SAConditionallyMutatingClientBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *actionRequests;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSNumber *commandTimeout;
@property (retain, nonatomic) SAHAFilter *filter;
@property (nonatomic) BOOL mutatingCommand;
@property (copy, nonatomic) NSString *serverValidity;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)command;
+ (id)commandWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
