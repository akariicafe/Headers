@class NSString, NSDictionary;

@interface ADAppRepresentation : NSObject

@property (retain, nonatomic) NSString *adamID;
@property (retain, nonatomic) NSDictionary *assetInformation;

- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0;
- (id)initWithAdamID:(id)a0 assetInformation:(id)a1;

@end
