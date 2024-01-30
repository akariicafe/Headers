@class NSString;

@interface SADialogInflectWordResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *print;
@property (copy, nonatomic) NSString *speak;

+ (id)inflectWordResponse;
+ (id)inflectWordResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
