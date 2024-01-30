@class NSString, NSArray;

@interface SAMLKeyRetrievalMethod : SAMLBaseElement

@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *transforms;

+ (id)createElement:(id *)a0;

@end
