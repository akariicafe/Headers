@class NSURL, NSArray, CPLShareParticipant;

@interface CPLShare : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long publicPermission;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) CPLShareParticipant *owner;
@property (readonly, nonatomic) CPLShareParticipant *currentUserParticipant;
@property (readonly, nonatomic) BOOL ownerIsCurrentUser;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
