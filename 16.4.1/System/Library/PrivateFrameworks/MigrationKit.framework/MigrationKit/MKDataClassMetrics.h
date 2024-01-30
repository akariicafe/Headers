@class NSString;

@interface MKDataClassMetrics : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int itemCount;
@property (nonatomic) unsigned long long size;
@property (nonatomic) double transferSpeed;
@property (nonatomic) double preparationTime;
@property (nonatomic) double exportTime;
@property (nonatomic) double networkQueueTime;
@property (nonatomic) double transferTime;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
