@class NSString, NSNumber;

@interface ICASEndTableData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *endingRowCount;
@property (readonly, nonatomic) NSNumber *endingColumnCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithEndingRowCount:(id)a0 endingColumnCount:(id)a1;

@end
