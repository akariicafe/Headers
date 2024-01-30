@class NSArray, SAMLNameId;

@interface SAMLSubject : SAMLBaseElement

@property (readonly, nonatomic) SAMLNameId *nameId;
@property (readonly, nonatomic) NSArray *subjectConfirmations;

+ (id)createElement:(id *)a0;

@end
