@interface CXSetSendingVideoCallAction : CXCallAction

@property (nonatomic, getter=isSendingVideo) BOOL sendingVideo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)initWithCallUUID:(id)a0 sendingVideo:(BOOL)a1;

@end
