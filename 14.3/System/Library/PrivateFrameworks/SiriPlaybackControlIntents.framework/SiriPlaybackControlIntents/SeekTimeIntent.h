@class NSArray, NSNumber, DeviceQuery;

@interface SeekTimeIntent : INIntent

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSNumber *playheadPosition;
@property (copy, nonatomic) NSNumber *shouldStartPlaybackAfterSeek;
@property (copy, nonatomic) NSArray *deviceContext;
@property (copy, nonatomic) NSNumber *isSkipToEnd;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
