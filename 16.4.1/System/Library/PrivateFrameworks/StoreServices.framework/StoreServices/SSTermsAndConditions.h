@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying>

@property (nonatomic, getter=isUserAccepted) BOOL userAccepted;
@property (nonatomic) NSString *currentText;
@property (nonatomic) long long currentVersionIdentifier;
@property (readonly, nonatomic) BOOL requiresAuthentication;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithResponseData:(id)a0 error:(id *)a1;

@end
