@class NSString, NSNumber, WAProviderDataOrigination;

@interface WAAQIData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *index;
@property (readonly, nonatomic) NSNumber *category;
@property (readonly, nonatomic) NSString *scale;
@property (readonly, nonatomic) WAProviderDataOrigination *providerDataOrigination;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithIndex:(id)a0 category:(id)a1 scale:(id)a2 providerDataOrigination:(id)a3;

@end
