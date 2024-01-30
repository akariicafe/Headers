@class NSDictionary, NSString;

@interface IKPlayerTimeDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInterval:(double)a0 elapsedTime:(double)a1;

@end
