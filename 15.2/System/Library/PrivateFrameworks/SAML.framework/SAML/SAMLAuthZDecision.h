@class NSArray, SAMLEvidence, NSString;

@interface SAMLAuthZDecision : SAMLBaseElement

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) SAMLEvidence *evidence;
@property (readonly, nonatomic) NSString *decision;
@property (readonly, nonatomic) NSString *resource;

+ (id)createElement:(id *)a0;

@end
