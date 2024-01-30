@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long lostModeType;
@property (nonatomic) BOOL lostModeEnabled;
@property (nonatomic) BOOL disableSlideToUnlock;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL facetimeCapable;
@property (retain, nonatomic) NSString *footnoteText;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
