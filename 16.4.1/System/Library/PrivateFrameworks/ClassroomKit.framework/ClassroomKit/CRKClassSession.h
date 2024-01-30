@class DMFControlSessionIdentifier, NSString, NSDate;

@interface CRKClassSession : CRKSession <CATRemoteConnectionDelegate>

@property (nonatomic) unsigned short flags;
@property (retain, nonatomic) NSDate *lastBeaconFoundDate;
@property (readonly, nonatomic) DMFControlSessionIdentifier *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateDictionary;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)lastMatchMessageForCurrentDate:(id)a0;
- (void)foundBeaconWithFlags:(unsigned short)a0;
- (void)logBeaconFound;
- (void)lostBeacon;

@end
