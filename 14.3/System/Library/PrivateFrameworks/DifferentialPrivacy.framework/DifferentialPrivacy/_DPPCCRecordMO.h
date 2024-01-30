@class NSString;

@interface _DPPCCRecordMO : NSManagedObject

@property (retain, nonatomic) NSString *value;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;

@end
