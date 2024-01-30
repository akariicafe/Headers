@class NSString;

@interface _DPCMSRecordMO : NSManagedObject

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;

@end
