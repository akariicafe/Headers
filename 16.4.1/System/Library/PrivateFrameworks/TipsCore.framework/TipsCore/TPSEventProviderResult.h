@class NSString, NSDictionary, NSDate;

@interface TPSEventProviderResult : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *observationMap;
@property (retain, nonatomic) NSDate *resultDate;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) id bookmark;

- (id)debugDescription;
- (void).cxx_destruct;

@end
