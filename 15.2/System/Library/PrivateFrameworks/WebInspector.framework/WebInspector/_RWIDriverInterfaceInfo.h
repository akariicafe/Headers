@class NSString, _RWIRelayClientConnection, NSSet, RWIDriverConfiguration, RWIDriverState;

@interface _RWIDriverInterfaceInfo : NSObject {
    RWIDriverConfiguration *_configuration;
    RWIDriverState *_state;
}

@property (readonly, nonatomic) _RWIRelayClientConnection *connection;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSSet *sessionIdentifiers;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 connection:(id)a1;
- (id)dictionaryRepresentation;
- (void)updateDriverState:(id)a0;

@end
