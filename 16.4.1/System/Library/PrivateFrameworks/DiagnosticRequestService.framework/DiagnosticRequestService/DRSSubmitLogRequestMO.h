@class NSString;

@interface DRSSubmitLogRequestMO : DRSRequestMO

@property (copy, nonatomic) NSString *logType;
@property (nonatomic) BOOL transferOwnership;

+ (id)fetchRequest;

@end
