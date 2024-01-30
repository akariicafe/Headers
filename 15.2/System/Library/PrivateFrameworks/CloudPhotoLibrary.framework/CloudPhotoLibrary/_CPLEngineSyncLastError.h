@class NSError, NSDate;

@interface _CPLEngineSyncLastError : NSObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
