@class NSString, NSDictionary, NSDate;

@interface TPSEventProviderResult : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *observationMap;
@property (retain, nonatomic) NSDate *resultDate;

- (void).cxx_destruct;
- (id)debugDescription;

@end
