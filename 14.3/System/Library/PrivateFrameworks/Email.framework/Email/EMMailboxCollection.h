@class EMMailboxRepository;

@interface EMMailboxCollection : EMCollection <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EMMailboxRepository *repository;

- (void)setRepository:(id)a0;
- (id)initWithObjectID:(id)a0 query:(id)a1;
- (id)initWithAccount:(id)a0 topLevelOnly:(BOOL)a1;
- (id)initWithMailbox:(id)a0 repository:(id)a1;
- (id)initWithAccount:(id)a0 topLevelOnly:(BOOL)a1 repository:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithMailbox:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
