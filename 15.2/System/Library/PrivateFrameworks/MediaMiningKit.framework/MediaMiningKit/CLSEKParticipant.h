@class NSURL, NSString;

@interface CLSEKParticipant : NSObject <NSCoding>

@property (readonly) long long participantStatus;
@property (readonly) NSURL *URL;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *name;
@property (readonly) BOOL isCurrentUser;
@property (readonly) long long participantType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEKParticipant:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
