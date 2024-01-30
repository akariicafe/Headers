@class NSString;

@interface OAXTextFieldIdentity : OITSUPair

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *type;

+ (id)identityWithGuid:(id)a0 type:(id)a1;

@end
