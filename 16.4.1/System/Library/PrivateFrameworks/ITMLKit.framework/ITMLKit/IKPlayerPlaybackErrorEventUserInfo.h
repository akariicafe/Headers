@class NSError, NSDictionary, NSString;

@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL shouldStopDueToError;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithError:(id)a0 shouldStopDueToError:(BOOL)a1;

@end
