@interface _UIHIDEventDescriptor : NSObject <NSCopying> {
    unsigned int _eventType;
    unsigned long long _senderID;
    long long _usagePage;
    long long _usage;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
