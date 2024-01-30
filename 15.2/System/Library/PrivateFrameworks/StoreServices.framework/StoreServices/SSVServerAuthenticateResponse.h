@class NSNumber, NSURL, NSString;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding>

@property (copy, nonatomic) NSNumber *authenticatedAccountIdentifier;
@property (nonatomic) long long performedButtonIndex;
@property (copy, nonatomic) NSURL *redirectURL;
@property (nonatomic) long long selectedButtonIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;

@end
