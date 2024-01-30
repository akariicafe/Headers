@class NSString, SAConnectionPolicy;

@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *aceHostHeader;
@property (retain, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (nonatomic) BOOL reconnectNow;

+ (id)setConnectionHeader;
+ (id)setConnectionHeaderWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
