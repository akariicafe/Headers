@interface _CLKNotificationCenterRegistration : NSObject {
    unsigned long long _registrationIdentifier;
}

@property (weak, nonatomic) id observer;
@property (nonatomic) SEL selector;

+ (void)recycleRegistration:(id)a0;
+ (id)recycledRegistrationWithIdentifier:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)recycledCopy;

@end
