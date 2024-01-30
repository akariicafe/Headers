@class NSString;

@interface ChronoCore.Task : NSObject {
    void /* unknown type, empty encoding */ schedulingConfiguration;
    void /* unknown type, empty encoding */ schedulingOptions;
    void /* unknown type, empty encoding */ powerlogUpdateIdentities;
    void /* unknown type, empty encoding */ powerlogWakeReason;
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ cost;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ taskIdentifier;
    void /* unknown type, empty encoding */ logDigest;
    void /* unknown type, empty encoding */ syncWorkItem;
    void /* unknown type, empty encoding */ asyncWorkItem;
    void /* unknown type, empty encoding */ completion;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
