@class NSData, NSString, NSNumber;

@interface MTKeyRequestData : NSObject

@property (retain, nonatomic) NSData *keyData;
@property (retain, nonatomic) NSString *keyIdentifier;
@property (retain, nonatomic) NSString *contentAdamId;
@property (retain, nonatomic) NSNumber *secureInvalidationDsid;

- (void).cxx_destruct;

@end
