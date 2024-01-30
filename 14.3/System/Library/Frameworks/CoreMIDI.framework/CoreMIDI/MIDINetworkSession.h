@class NSString;

@interface MIDINetworkSession : NSObject {
    void *_imp;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) unsigned long long networkPort;
@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSString *localName;
@property (nonatomic) unsigned long long connectionPolicy;

+ (id)defaultSession;

- (BOOL)removeConnection:(id)a0;
- (id)contacts;
- (BOOL)addContact:(id)a0;
- (id)init;
- (id)connections;
- (BOOL)addConnection:(id)a0;
- (void)dealloc;
- (BOOL)removeContact:(id)a0;
- (void)sessionChanged;
- (void)updateFromEntity;
- (void)setStateToEntity;
- (void)refreshBonjourName;
- (BOOL)addOrRemoveConnection:(id)a0 add:(BOOL)a1;
- (void)contactsChanged;
- (unsigned int)sourceEndpoint;
- (unsigned int)destinationEndpoint;

@end
