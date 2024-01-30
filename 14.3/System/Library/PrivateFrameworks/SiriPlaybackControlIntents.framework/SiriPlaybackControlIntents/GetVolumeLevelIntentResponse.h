@class NSNumber;

@interface GetVolumeLevelIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSNumber *currentVolumeLevel;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
