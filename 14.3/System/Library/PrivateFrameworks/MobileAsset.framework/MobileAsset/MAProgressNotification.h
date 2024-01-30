@interface MAProgressNotification : NSObject

@property (nonatomic) long long totalExpected;
@property (nonatomic) long long totalWritten;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemaining;

@end
