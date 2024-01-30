@class NSString, CLSocket, NSURL, NSDate;

@interface CLAccount : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) NSURL *domain;
@property (retain, nonatomic) NSURL *domainHomePage;
@property (nonatomic, getter=isAlphaUser) BOOL alphaUser;
@property (nonatomic) BOOL uploadsArePrivate;
@property (copy, nonatomic) NSString *email;
@property (retain, nonatomic) NSDate *subscriptionExpiresAt;
@property (nonatomic) long long type;
@property (retain, nonatomic) CLSocket *socket;

+ (id)accountWithEmail:(id)a0;

- (id)initWithEmail:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
