@class CXScreenShareAttributes;

@interface CXSetSharingScreenCallAction : CXCallAction

@property (nonatomic, getter=isSharingScreen) BOOL sharingScreen;
@property (retain, nonatomic) CXScreenShareAttributes *attributes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)initWithCallUUID:(id)a0 sharingScreen:(BOOL)a1;

@end
