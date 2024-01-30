@class NSDictionary, NSString;

@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) BOOL shouldChange;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIndex:(long long)a0;
- (void)processReturnJSValue:(id)a0 inContext:(id)a1;
- (BOOL)expectsReturnValue;

@end
