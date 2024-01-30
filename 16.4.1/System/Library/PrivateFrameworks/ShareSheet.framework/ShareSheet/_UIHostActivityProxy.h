@class NSUUID, NSString, UIActivity, NSAttributedString, SFProxyText;

@interface _UIHostActivityProxy : NSObject <NSSecureCoding, SHSheetActivityProxy> {
    _Atomic unsigned int _iconImageSlotID;
    _Atomic unsigned int _labelSlotID;
    _Atomic double _slotTextHeight;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *activityIdentifierShare;
@property (retain, nonatomic) NSUUID *activityIdentifierOpen;
@property (retain, nonatomic) NSUUID *activityIdentifierCopy;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isRestricted;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL isUserDefaultsActivity;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (retain, nonatomic) SFProxyText *activityTitle;
@property (copy, nonatomic) NSAttributedString *activityFooter;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned int iconImageSlotID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)load;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (void)setLabelSlotID:(unsigned int)a0;
- (unsigned int)imageSlotID;
- (unsigned int)labelSlotID;
- (void)setIconImageSlotID:(unsigned int)a0;
- (void)setSlotTextHeight:(double)a0;
- (double)slotTextHeight;

@end
