@class NSString, NSMutableDictionary;

@interface ACFMessage : NSObject <ACFGeneralMessageProtocol, ACFErrorReportingProtocol> {
    NSMutableDictionary *_mutableInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)message;
+ (id)messageWithInfo:(id)a0;
+ (id)messageWithIdentifier:(id)a0;

- (id)initWithInfo:(id)a0;
- (id)identifier;
- (void)removeObjectForKey:(id)a0;
- (long long)errorCode;
- (void)encodeWithCoder:(id)a0;
- (void)setInfo:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)info;
- (void)setError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearError;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)error;
- (id)errorMessage;
- (void)dealloc;
- (void)setIdentifier:(id)a0;
- (id)mutableInfo;
- (int)senderProcessID;
- (void)setSenderProcessID:(int)a0;
- (id)senderProcessName;
- (void)setSenderProcessName:(id)a0;
- (id)senderPortName;
- (void)setSenderPortName:(id)a0;

@end
