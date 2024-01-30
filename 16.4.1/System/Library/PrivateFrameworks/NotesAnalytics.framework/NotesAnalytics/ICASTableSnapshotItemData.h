@class NSString, NSNumber;

@interface ICASTableSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *tableRowCount;
@property (readonly, nonatomic) NSNumber *tableColumnCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTableRowCount:(id)a0 tableColumnCount:(id)a1;

@end
