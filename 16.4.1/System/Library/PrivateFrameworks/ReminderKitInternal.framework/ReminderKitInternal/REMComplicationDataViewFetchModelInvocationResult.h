@interface REMComplicationDataViewFetchModelInvocationResult : REMStoreInvocationResult {
    void /* unknown type, empty encoding */ accountStorages;
    void /* unknown type, empty encoding */ listStorages;
    void /* unknown type, empty encoding */ reminderStorages;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
