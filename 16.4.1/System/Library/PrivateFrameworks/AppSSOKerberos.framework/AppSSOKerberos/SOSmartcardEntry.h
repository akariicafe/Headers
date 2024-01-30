@class NSString, NSDictionary, NSData;

@interface SOSmartcardEntry : NSObject

@property (retain) NSString *upn;
@property (retain) NSString *certName;
@property (retain) NSString *tokenID;
@property (retain) NSDictionary *attributes;
@property struct __SecIdentity { } *identity;
@property (retain) NSData *persistientRef;

- (void).cxx_destruct;

@end
