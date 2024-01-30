@class ACFPrincipal, NSString, NSData, NSDate, NSNumber;

@interface ACMToken : NSObject {
    NSDate *_expirationDate;
}

@property (retain) ACFPrincipal *principal;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *expirationDate;
@property (copy, nonatomic) NSString *tokenString;
@property (retain) NSData *tokenData;
@property (retain) NSString *nonce;
@property (retain) NSString *userPreferences;
@property (retain) NSNumber *personID;
@property (retain) NSNumber *isTwoStepVerificationRequired;

+ (id)tokenWithPrincipal:(id)a0 creationDate:(id)a1 tokenData:(id)a2;
+ (id)tokenWithPrincipal:(id)a0 creationDate:(id)a1 tokenString:(id)a2;

- (void)dealloc;

@end
