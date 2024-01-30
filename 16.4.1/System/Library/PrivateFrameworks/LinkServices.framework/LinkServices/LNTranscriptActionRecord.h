@class NSArray, NSString, NSUUID, NSData, NSDate, LNActionOutput, LNAction;

@interface LNTranscriptActionRecord : NSObject <NSSecureCoding, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *actionData;
@property (readonly, copy, nonatomic) NSData *resolvedActionData;
@property (readonly, copy, nonatomic) NSData *actionOutputData;
@property (readonly, copy, nonatomic) NSData *predictionsData;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned short source;
@property (readonly, copy, nonatomic) NSString *clientLabel;
@property (readonly, copy, nonatomic) NSUUID *executionUUID;
@property (readonly, copy, nonatomic) NSDate *executionDate;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) LNAction *resolvedAction;
@property (readonly, copy, nonatomic) LNActionOutput *actionOutput;
@property (readonly, copy, nonatomic) NSArray *predictions;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)datastoreVersion;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithAction:(id)a0 resolvedAction:(id)a1 bundleIdentifier:(id)a2 actionOutput:(id)a3 executionUUID:(id)a4 source:(unsigned short)a5 executionDate:(id)a6 clientLabel:(id)a7 predictions:(id)a8;
- (id)initWithBundleIdentifier:(id)a0 source:(unsigned short)a1 clientLabel:(id)a2 executionUUID:(id)a3 executionDate:(id)a4 action:(id)a5 resolvedAction:(id)a6 actionOutput:(id)a7 predictions:(id)a8;
- (id)initWithBundleIdentifier:(id)a0 source:(unsigned short)a1 clientLabel:(id)a2 executionUUID:(id)a3 executionDate:(id)a4 actionData:(id)a5 resolvedActionData:(id)a6 actionOutputData:(id)a7 predictionsData:(id)a8;

@end
