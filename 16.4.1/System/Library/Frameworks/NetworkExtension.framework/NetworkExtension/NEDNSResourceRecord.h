@class NSString;

@interface NEDNSResourceRecord : NSObject

@property (readonly) long long type;
@property (readonly) NSString *name;
@property (readonly) long long recordClass;
@property (readonly) unsigned long long timeToLive;
@property (readonly) unsigned long long dataLength;
@property (readonly) NSString *resourceString;

- (void).cxx_destruct;

@end
