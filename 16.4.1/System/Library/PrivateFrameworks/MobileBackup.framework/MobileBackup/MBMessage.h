@class MBConnection, NSString, NSMutableDictionary, NSArray, NSError, NSObject;
@protocol OS_xpc_object, NSSecureCoding, NSCopying;

@interface MBMessage : NSObject <NSKeyedArchiverDelegate>

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (retain, nonatomic) NSMutableDictionary *messageInfo;
@property (retain, nonatomic) NSMutableDictionary *replyInfo;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *arguments;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<NSSecureCoding, NSCopying> *reply;
@property (retain, nonatomic) NSError *replyError;
@property (retain, nonatomic) MBConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithName:(id)a0 arguments:(id)a1 personaIdentifier:(id)a2;
+ (id)messageWithName:(id)a0 arguments:(id)a1;
+ (id)_allowedClasses;

- (void)archiver:(id)a0 didEncodeObject:(id)a1;
- (void)sendReply;
- (id)_initWithXPCObject:(id)a0;
- (id)_xpcObject;
- (id)initWithName:(id)a0 arguments:(id)a1;
- (void).cxx_destruct;

@end
