@class NSArray, NSDictionary, NSString;

@interface LNSystemProtocol : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSDictionary *systemProtocolKindsByIdentifier;
@property (class, readonly, nonatomic) NSArray *allProtocols;
@property (class, readonly, nonatomic) LNSystemProtocol *changeBinarySettingSystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *deleteEntitySystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *duplicateEntitySystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *openEntitySystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *saveEntitySystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *undoSystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *createEntitySystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *searchSystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *copySystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *pasteSystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *cutSystemProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *previewEntityProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *putEntityInContainerProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *favoriteEntityProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *closeEntityProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *stingProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *cancelProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *navigateSequentiallyProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *moveSpatialProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *scrollProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *resizeProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *zoomProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *copyEntityProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *cutEntityProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *enterMarkupProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *exitMarkupProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *startWorkoutProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *pauseWorkoutProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *resumeWorkoutProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *focusConfigurationProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *sessionStartingProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *audioStartingProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *requiresMDMChecksProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *startDiveProtocol;
@property (class, readonly, nonatomic) LNSystemProtocol *favoriteProtocol;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *defaultActionIdentifier;

+ (id)protocolOrNilWithIdentifier:(id)a0;
+ (id)protocolWithIdentifier:(id)a0;
+ (id)parametersForProtocolWithIdentifier:(id)a0;
+ (id)allProtocolsByIdentifier;
+ (id)ofKind:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
