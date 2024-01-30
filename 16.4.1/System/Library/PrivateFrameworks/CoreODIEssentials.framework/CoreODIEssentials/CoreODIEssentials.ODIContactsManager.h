@protocol _TtP17CoreODIEssentials26ODIContactsManagerProtocol_;

@interface CoreODIEssentials.ODIContactsManager : NSObject <CoreODIEssentials.ODIContactsManagerProtocol> {
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ _meContact;
}

@property (class, nonatomic, retain) id<_TtP17CoreODIEssentials26ODIContactsManagerProtocol_> sharedInstance;

- (id)getMeContact;
- (id)init;
- (void).cxx_destruct;
- (BOOL)reloadMeContact;

@end
