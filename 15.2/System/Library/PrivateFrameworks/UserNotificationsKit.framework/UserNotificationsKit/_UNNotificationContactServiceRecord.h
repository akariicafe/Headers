@class NSString, _UNNotificationContact;

@interface _UNNotificationContactServiceRecord : NSObject

@property (retain, nonatomic) _UNNotificationContact *contact;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
