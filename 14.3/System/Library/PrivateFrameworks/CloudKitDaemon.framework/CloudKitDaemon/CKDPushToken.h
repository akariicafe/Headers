@class NSString, NSData;

@interface CKDPushToken : NSObject

@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSData *apsToken;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
