@class NSString;
@protocol FMAPSDelegate;

@interface FMAPSDelegateInfo : NSObject

@property (retain, nonatomic) NSString *topic;
@property (weak, nonatomic) id<FMAPSDelegate> delegate;

- (void).cxx_destruct;

@end
