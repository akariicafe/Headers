@class NSDictionary, NSString;

@interface IKPlayerTransportBarVisibilityDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHidden:(BOOL)a0;

@end
