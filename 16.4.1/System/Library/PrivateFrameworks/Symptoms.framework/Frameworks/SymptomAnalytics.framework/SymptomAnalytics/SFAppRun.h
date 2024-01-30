@class NSNumber, SFApp, NSDate;

@interface SFAppRun : NSManagedObject

@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSDate *timeEnd;
@property (copy, nonatomic) NSDate *timeStart;
@property (copy, nonatomic) NSNumber *wifiIN_end;
@property (copy, nonatomic) NSNumber *wifiIN_start;
@property (copy, nonatomic) NSNumber *wifiOUT_end;
@property (copy, nonatomic) NSNumber *wifiOUT_start;
@property (copy, nonatomic) NSNumber *wiredIN_end;
@property (copy, nonatomic) NSNumber *wiredIN_start;
@property (copy, nonatomic) NSNumber *wiredOUT_end;
@property (copy, nonatomic) NSNumber *wiredOUT_start;
@property (copy, nonatomic) NSNumber *wwanIN_end;
@property (copy, nonatomic) NSNumber *wwanIN_start;
@property (copy, nonatomic) NSNumber *wwanOUT_end;
@property (copy, nonatomic) NSNumber *wwanOUT_start;
@property (retain, nonatomic) SFApp *hasApp;

+ (id)entityName;
+ (id)fetchRequest;

@end
