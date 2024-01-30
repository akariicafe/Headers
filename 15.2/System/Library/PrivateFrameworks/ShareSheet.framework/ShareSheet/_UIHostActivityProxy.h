@class UIActivity, NSUUID, NSString;

@interface _UIHostActivityProxy : NSObject <NSSecureCoding, SHSheetLoadableProxy> {
    _Atomic unsigned int _imageSlotID;
    _Atomic unsigned int _labelSlotID;
    _Atomic double _platterTextHeight;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, nonatomic) NSUUID *proxyIdentifier;
@property (retain, nonatomic) NSUUID *activityIdentifierShare;
@property (retain, nonatomic) NSUUID *activityIdentifierOpen;
@property (retain, nonatomic) NSUUID *activityIdentifierCopy;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic, getter=isLongPressable) BOOL longPressable;
@property unsigned int imageSlotID;
@property unsigned int labelSlotID;
@property double platterTextHeight;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)load;
- (id)initWithActivity:(id)a0;

@end
