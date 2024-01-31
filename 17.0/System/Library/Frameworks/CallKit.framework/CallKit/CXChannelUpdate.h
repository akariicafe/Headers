@class CXParticipant, NSString, NSUUID, NSURL, CXSandboxExtendedURL;

@interface CXChannelUpdate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long audioBluetoothFormat;
@property (copy, nonatomic) NSString *audioCategory;
@property (nonatomic) long long audioInterruptionOperationMode;
@property (nonatomic) long long audioInterruptionProvider;
@property (copy, nonatomic) NSString *audioMode;
@property (readonly, nonatomic) struct CXChannelUpdateHasSet { unsigned char activeRemoteParticipant : 1; unsigned char audioBluetoothFormat : 1; unsigned char audioCategory : 1; unsigned char audioInterruptionProvider : 1; unsigned char audioInterruptionOperationMode : 1; unsigned char audioMode : 1; unsigned char name : 1; unsigned char sandboxExtendedImageURL : 1; unsigned char serviceStatus : 1; unsigned char transmissionMode : 1; unsigned char accessoryButtonEventsEnabled : 1; } hasSet;
@property (retain, nonatomic) CXSandboxExtendedURL *sandboxExtendedImageURL;
@property (readonly, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) CXParticipant *activeRemoteParticipant;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long serviceStatus;
@property (nonatomic) long long transmissionMode;
@property (nonatomic) BOOL accessoryButtonEventsEnabled;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)description;
- (id)sanitizedCopy;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)updateWithUpdate:(id)a0;

@end
