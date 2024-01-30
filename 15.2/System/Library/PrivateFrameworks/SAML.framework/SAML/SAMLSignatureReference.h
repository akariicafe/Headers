@class NSString, NSArray, NSData;

@interface SAMLSignatureReference : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *transforms;
@property (readonly, nonatomic) NSString *digestMethod;
@property (readonly, nonatomic) NSData *digestValue;

+ (id)createElement:(id *)a0;

@end
