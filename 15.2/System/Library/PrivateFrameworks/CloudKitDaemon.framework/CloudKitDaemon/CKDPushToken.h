@class NSString, NSData;

@interface CKDPushToken : NSObject

@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSData *apsToken;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
