@class NSString, NSData;

@interface CKDPushToken : NSObject

@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSData *apsToken;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
