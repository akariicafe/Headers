@class NSArray, NSString, NSURL;

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *actionResults;
@property (copy, nonatomic) NSString *clientValidity;
@property (copy, nonatomic) NSString *commandOutcome;
@property (copy, nonatomic) NSURL *homeIdentifier;
@property (copy, nonatomic) NSString *serverValidity;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandCompleted;
+ (id)commandCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
