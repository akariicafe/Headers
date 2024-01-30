@class NSString, SFFlow, NSDate, NSNumber;

@interface SFLiveFlowPerf : NSManagedObject

@property (copy, nonatomic) NSNumber *connAttempts;
@property (copy, nonatomic) NSNumber *connSuccesses;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSNumber *overallTime;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *timesThresholded;
@property (copy, nonatomic) NSString *tmpID;
@property (copy, nonatomic) NSNumber *txFailPackets;
@property (copy, nonatomic) NSNumber *txPackets;
@property (copy, nonatomic) NSNumber *txReTxInterval;
@property (copy, nonatomic) NSNumber *txReTxPackets;
@property (copy, nonatomic) NSNumber *usecsEstabTime;
@property (retain, nonatomic) SFFlow *hasFlow;

+ (id)entityName;
+ (id)fetchRequest;

@end
