@class NSNumber;

@interface EDAMAdImpressions : FATObject

@property (retain, nonatomic) NSNumber *adId;
@property (retain, nonatomic) NSNumber *impressionCount;
@property (retain, nonatomic) NSNumber *impressionTime;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
