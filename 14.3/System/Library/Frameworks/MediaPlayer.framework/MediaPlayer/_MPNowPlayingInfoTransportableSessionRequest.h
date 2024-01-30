@class NSString;

@interface _MPNowPlayingInfoTransportableSessionRequest : NSObject <MPNowPlayingInfoTransportableSessionRequest>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *preferredSessionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithIdentifier:(id)a0 preferredSessionType:(id)a1;

- (void).cxx_destruct;

@end
