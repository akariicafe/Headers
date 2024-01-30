@class NSSet, NSDate;

@interface _DNDSPendingMessageRecipients : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDate *lastUpdateDate;
@property (readonly, copy, nonatomic) NSSet *deviceIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLastUpdateDate:(id)a0 deviceIdentifiers:(id)a1;

@end
