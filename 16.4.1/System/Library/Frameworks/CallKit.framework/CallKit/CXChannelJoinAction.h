@class NSURL, NSString, CXChannelUpdate;

@interface CXChannelJoinAction : CXChannelAction

@property (readonly, nonatomic) CXChannelUpdate *channelUpdate;
@property (retain, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithChannelUUID:(id)a0 name:(id)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
