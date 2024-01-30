@class NSString;

@interface WAReferralData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *referringApplication;
@property (readonly, nonatomic) NSString *referringUrl;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithReferringApplication:(id)a0 referringUrl:(id)a1;

@end
