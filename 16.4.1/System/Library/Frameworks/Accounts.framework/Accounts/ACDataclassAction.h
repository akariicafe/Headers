@class NSArray, NSString;

@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=_isError) BOOL _error;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isDestructive;
@property (readonly, nonatomic) NSArray *affectedContainers;
@property (retain, nonatomic) NSString *undoAlertTitle;
@property (retain, nonatomic) NSString *undoAlertMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithType:(long long)a0;
+ (id)destructiveActionWithType:(long long)a0 affectedContainers:(id)a1;
+ (id)destructiveActionWithType:(long long)a0;
+ (id)_actionForError:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)a0;
- (id)_initWithProtobufData:(id)a0;
- (id)_encodeProtobuf;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 destructivity:(BOOL)a1 affectedContainers:(id)a2;

@end
