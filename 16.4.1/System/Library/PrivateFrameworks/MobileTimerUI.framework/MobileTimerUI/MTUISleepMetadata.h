@class NSString, NSDateComponents;

@interface MTUISleepMetadata : NSObject

@property (retain, nonatomic) NSString *detailedDescription;
@property (retain, nonatomic) NSString *mainDescription;
@property (retain, nonatomic) NSDateComponents *alarmComponents;
@property (nonatomic) BOOL displaysTime;

- (void).cxx_destruct;

@end
