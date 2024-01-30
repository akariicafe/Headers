@class NSDictionary, NSString;

@interface IKPlayerRequestSeekToTimeEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) double requestedTime;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) BOOL shouldSeek;
@property (readonly, nonatomic) double proposedTime;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processReturnJSValue:(id)a0 inContext:(id)a1;
- (id)initWithRequestedTime:(double)a0 currentTime:(double)a1;

@end
