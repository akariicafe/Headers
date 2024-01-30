@class NSString, NSDictionary, NSData, NSError;

@interface ENTestResultPersistentSession : NSObject

@property (copy, nonatomic) NSString *certificate;
@property (copy, nonatomic) NSDictionary *fetchedMetadata;
@property (copy, nonatomic) NSData *HMACKey;
@property (copy, nonatomic) NSString *revisionToken;
@property (copy, nonatomic) NSError *verificationError;
@property (copy, nonatomic) NSString *verificationToken;

- (void).cxx_destruct;

@end
