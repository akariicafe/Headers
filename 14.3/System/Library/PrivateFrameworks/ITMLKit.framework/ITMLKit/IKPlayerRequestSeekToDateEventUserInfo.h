@class NSDictionary, NSString, NSDate;

@interface IKPlayerRequestSeekToDateEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) NSDate *requestedDate;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL shouldSeek;
@property (readonly, nonatomic) NSDate *proposedDate;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processReturnJSValue:(id)a0 inContext:(id)a1;
- (id)initWithRequestDate:(id)a0 currentDate:(id)a1;

@end
