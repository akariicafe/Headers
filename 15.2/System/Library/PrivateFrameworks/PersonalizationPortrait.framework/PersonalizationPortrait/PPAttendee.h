@class NSString, NSURL;

@interface PPAttendee : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) unsigned char status;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEKParticipant:(id)a0;
- (BOOL)isEqualToAttendee:(id)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 url:(id)a2 isCurrentUser:(BOOL)a3 status:(unsigned char)a4;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
