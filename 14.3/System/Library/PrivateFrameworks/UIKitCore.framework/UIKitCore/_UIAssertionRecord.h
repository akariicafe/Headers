@class NSString;

@interface _UIAssertionRecord : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL initialState;
@property (nonatomic) long long activeAssertionCount;
@property (copy, nonatomic) NSString *reason;

- (void).cxx_destruct;

@end
