@class NSArray, NSString, NSUUID, AVAudioFormat;

@interface ATAudioTapDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tapType;
@property (nonatomic) int processIdentifier;
@property (copy, nonatomic) NSArray *processIdentifiers;
@property (copy, nonatomic) NSArray *excludedPIDs;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic, getter=isPreSpatial) BOOL preSpatial;
@property (readonly, nonatomic) unsigned int audioSessionID;
@property (readonly, nonatomic) unsigned int sessionType;
@property (readonly, nonatomic) NSString *sceneIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initPreSpatialSessionTypeTapWithFormat:(id)a0 sessionType:(unsigned int)a1;
- (id)initProcessTapWithFormat:(id)a0 PIDs:(id)a1;
- (id)initPreSpatialTapInternalWithFormat:(id)a0 PIDs:(id)a1 sessionID:(unsigned int)a2 sessionType:(unsigned int)a3 sceneID:(id)a4;
- (id)initScreenSharingTapWithFormat:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initProcessTapWithFormat:(id)a0 PID:(int)a1;
- (BOOL)setProcessIdentifiersChecked:(id)a0;
- (id)initPreSpatialSceneIdentifierTapWithFormat:(id)a0 sceneIdentifier:(id)a1;
- (id)initPreSpatialProcessTapWithFormat:(id)a0 PIDs:(id)a1;
- (id)initPreSpatialProcessTapWithFormat:(id)a0 PID:(int)a1;
- (id)initTapInternalWithFormat:(id)a0 PIDs:(id)a1;
- (id)initPreSpatialAudioSessionTapWithFormat:(id)a0 sessionID:(unsigned int)a1;
- (id)initBaseTapInternalWithFormat:(id)a0;
- (id)description;
- (id)initSystemTapWithFormat:(id)a0 excludePIDs:(id)a1;
- (void).cxx_destruct;
- (id)initSystemTapWithFormat:(id)a0;

@end
