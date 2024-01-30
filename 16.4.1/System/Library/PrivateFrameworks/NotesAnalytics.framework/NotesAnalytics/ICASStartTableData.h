@class NSString, NSNumber;

@interface ICASStartTableData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *startingRowCount;
@property (readonly, nonatomic) NSNumber *startingColumnCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithStartingRowCount:(id)a0 startingColumnCount:(id)a1;

@end
