@class NSArray;
@protocol MNLocationHistoryProvider;

@interface MNLocationHistory : NSObject

@property (retain, nonatomic) id<MNLocationHistoryProvider> locationHistoryProvider;
@property (readonly) NSArray *locationHistory;

- (id)init;
- (void).cxx_destruct;

@end
