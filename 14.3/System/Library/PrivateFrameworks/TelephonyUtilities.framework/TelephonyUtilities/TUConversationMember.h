@class TUHandle, NSString, NSArray, NSSet;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *idsDestination;
@property (readonly, copy, nonatomic) NSArray *idsDestinations;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSSet *handles;

- (id)initWithContact:(id)a0;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithDestinations:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithHandles:(id)a0;
- (id)initWithContact:(id)a0 additionalHandles:(id)a1;
- (BOOL)isEqualToMember:(id)a0;
- (BOOL)representsSameMemberAs:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
