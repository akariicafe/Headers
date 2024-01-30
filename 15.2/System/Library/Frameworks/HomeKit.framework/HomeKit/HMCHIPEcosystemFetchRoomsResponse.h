@class NSArray, HMMatterRoom;

@interface HMCHIPEcosystemFetchRoomsResponse : HMCHIPEcosystemResponse

@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly, nonatomic) HMMatterRoom *suggestedRoom;

+ (BOOL)supportsSecureCoding;

- (id)messageType;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRooms:(id)a0 suggestion:(id)a1;

@end
