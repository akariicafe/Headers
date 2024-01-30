@class NSArray, NSString, NSProgress, NSURL, NSError, SFAirDropTransferMetaData, SFAirDropAction;

@interface SFAirDropTransfer : NSObject <NSSecureCoding, NSCopying> {
    BOOL _usedByTransferManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *customDestinationURL;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SFAirDropTransferMetaData *metaData;
@property (nonatomic) unsigned long long userResponse;
@property (nonatomic) unsigned long long transferState;
@property (nonatomic) unsigned long long failureReason;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSProgress *transferProgress;
@property (retain, nonatomic) id progressToken;
@property (copy, nonatomic) NSString *contentsTitle;
@property (copy, nonatomic) NSString *contentsDescription;
@property (retain, nonatomic) SFAirDropAction *selectedAction;
@property (retain, nonatomic) NSArray *possibleActions;
@property (retain, nonatomic) SFAirDropAction *cancelAction;
@property (nonatomic) BOOL willOpenInMRQL;
@property (copy, nonatomic) NSArray *completedURLs;
@property (readonly, nonatomic) BOOL isJustFiles;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, nonatomic) BOOL needsAction;

+ (BOOL)automaticallyNotifiesObserversOfFailureReason;
+ (BOOL)automaticallyNotifiesObserversOfTransferState;
+ (BOOL)automaticallyNotifiesObserversOfUserResponse;
+ (id)keyPathsForValuesAffectingNeedsAction;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithInformation:(id)a0;
- (id)initWithIdentifier:(id)a0 initialInformation:(id)a1;
- (void)setUpProgress;
- (void)setUpProgressToBroadcast:(BOOL)a0;
- (BOOL)updateUsingCoder:(id)a0;
- (BOOL)updateWithTransfer:(id)a0;

@end
