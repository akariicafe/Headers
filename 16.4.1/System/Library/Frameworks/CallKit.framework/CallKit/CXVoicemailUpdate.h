@class NSUUID, NSString, NSURL, CXHandle, NSDate;

@interface CXVoicemailUpdate : NSObject <CXCopying, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CXVoicemailUpdateHasSet { unsigned char sender : 1; unsigned char dateReceived : 1; unsigned char audioFileURL : 1; unsigned char played : 1; unsigned char trashed : 1; } hasSet;
@property (copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSUUID *voicemailUUID;
@property (copy, nonatomic) CXHandle *sender;
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSURL *audioFileURL;
@property (nonatomic, getter=isPlayed) BOOL played;
@property (nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopy;
- (void).cxx_destruct;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVoicemailUUID:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
