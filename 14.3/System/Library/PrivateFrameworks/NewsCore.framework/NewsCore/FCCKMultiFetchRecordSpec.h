@class NSString, NSArray;

@interface FCCKMultiFetchRecordSpec : NSObject

@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) NSArray *fetchKeys;
@property (nonatomic) BOOL shortcut;

- (void).cxx_destruct;

@end
