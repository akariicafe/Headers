@class NSString;

@interface SeymourUI.EngagementMessageTarget : NSObject <IAMMessageTarget> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ onBannerUpdate;
    void /* unknown type, empty encoding */ onBannerRemoval;
}

@property (nonatomic, readonly) NSString *targetIdentifier;
@property (nonatomic, readonly) BOOL shouldBeNotifiedOfNilPriorityMessageAfterRegistration;

- (void)messageCoordinator:(id)a0 didUpdatePriorityMessage:(id)a1 forTarget:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
