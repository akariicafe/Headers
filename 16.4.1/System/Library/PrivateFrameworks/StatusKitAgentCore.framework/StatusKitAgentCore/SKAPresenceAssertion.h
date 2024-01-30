@class NSString, SKPresencePayload, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) BOOL isPersonal;
@property (copy, nonatomic) SKPresencePayload *payload;

+ (id)logger;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 payload:(id)a2;
- (BOOL)isEqualToPresenceAssertion:(id)a0;

@end
