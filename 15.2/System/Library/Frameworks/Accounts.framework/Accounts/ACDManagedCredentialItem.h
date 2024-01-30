@class NSString, NSNumber, NSDate;

@interface ACDManagedCredentialItem : NSManagedObject

@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSNumber *persistent;

@end
