@class NSString, NSDictionary, NSDate;

@interface SQPool : NSObject

@property (copy, nonatomic) NSString *poolID;
@property (copy, nonatomic) NSString *poolName;
@property (copy, nonatomic) NSString *poolDescription;
@property (retain, nonatomic) NSDate *targetDate;
@property (copy, nonatomic) NSString *regionID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)dateFormatter;
+ (id)poolWithRegionID:(id)a0;

- (void).cxx_destruct;

@end
