@interface CXSetSendingVideoCallAction : CXCallAction

@property (nonatomic, getter=isSendingVideo) BOOL sendingVideo;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 sendingVideo:(BOOL)a1;

@end
