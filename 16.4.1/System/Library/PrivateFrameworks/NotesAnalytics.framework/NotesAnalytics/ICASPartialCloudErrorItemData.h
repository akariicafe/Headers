@class NSString, NSNumber;

@interface ICASPartialCloudErrorItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *syncableDataType;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSString *errorString;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSyncableDataType:(id)a0 errorCode:(id)a1 count:(id)a2 errorString:(id)a3;

@end
