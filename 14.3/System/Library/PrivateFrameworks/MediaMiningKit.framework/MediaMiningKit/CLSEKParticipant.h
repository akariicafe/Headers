@class NSURL, NSString;

@interface CLSEKParticipant : NSObject <NSCoding>

@property (readonly) long long participantStatus;
@property (readonly) NSURL *URL;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *name;
@property (readonly) BOOL isCurrentUser;
@property (readonly) long long participantType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEKParticipant:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
