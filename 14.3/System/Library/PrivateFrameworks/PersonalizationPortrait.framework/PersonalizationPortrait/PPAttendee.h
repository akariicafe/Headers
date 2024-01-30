@class NSString;

@interface PPAttendee : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) unsigned char status;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 urlString:(id)a2 isCurrentUser:(BOOL)a3 status:(unsigned char)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToAttendee:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEKParticipant:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
