@class NSString;
@protocol AEPolicyDeactivation;

@interface AEPersistentDeactivation : NSObject {
    NSString *_scratchpadIdentifier;
    id<AEPolicyDeactivation> _deactivation;
}

- (void).cxx_destruct;

@end
