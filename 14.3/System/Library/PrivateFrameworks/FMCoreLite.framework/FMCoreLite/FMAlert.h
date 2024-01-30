@class NSUUID, NSString, NSDictionary;

@interface FMAlert : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *alertId;
@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgText;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL showMsgInLockScreen;
@property (nonatomic) BOOL dismissMsgOnUnlock;
@property (nonatomic) BOOL dismissMsgOnLock;
@property (retain, nonatomic) NSDictionary *additionalSettings;
@property (copy, nonatomic) id /* block */ defaultButtonAction;
@property (copy, nonatomic) id /* block */ alternateButtonAction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
