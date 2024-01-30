@class NSArray, NSString, NSProgress, NSURL, NSError, SFAirDropTransferMetaData, SFAirDropAction;

@interface SFAirDropTransfer : NSObject <NSSecureCoding, NSCopying>

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
@property (copy, nonatomic) NSArray *completedURLs;
@property (readonly, nonatomic) BOOL needsAction;

+ (BOOL)automaticallyNotifiesObserversOfFailureReason;
+ (id)keyPathsForValuesAffectingNeedsAction;
+ (BOOL)automaticallyNotifiesObserversOfTransferState;
+ (BOOL)automaticallyNotifiesObserversOfUserResponse;

- (void)setUpProgress;
- (BOOL)updateWithTransfer:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)setUpProgressToBroadcast:(BOOL)a0;
- (BOOL)updateUsingCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 initialInformation:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)updateWithInformation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
