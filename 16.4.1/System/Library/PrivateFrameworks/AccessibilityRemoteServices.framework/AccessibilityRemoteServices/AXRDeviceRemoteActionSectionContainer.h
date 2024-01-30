@class NSString, NSArray;

@interface AXRDeviceRemoteActionSectionContainer : NSObject

@property (readonly, nonatomic) long long preferredContextType;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSArray *remoteActions;

- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 preferredContextType:(long long)a1 remoteActions:(id)a2;

@end
