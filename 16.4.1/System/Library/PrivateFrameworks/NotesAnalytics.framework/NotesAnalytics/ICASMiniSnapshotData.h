@class NSString, NSArray;

@interface ICASMiniSnapshotData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSArray *miniAccountSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithMiniAccountSummary:(id)a0;

@end
