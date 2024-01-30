@class NSUUID;

@interface HPSettingsClientInfo : NSObject

@property (readonly, copy, nonatomic) NSUUID *endpointID;
@property (copy, nonatomic) id /* block */ block;

- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;

@end
