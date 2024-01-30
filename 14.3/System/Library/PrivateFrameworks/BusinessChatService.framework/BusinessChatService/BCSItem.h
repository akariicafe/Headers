@class NSObject, NSString, NSDate;

@interface BCSItem : NSObject <BCSItemIdentifying, BCSExpiring>

@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (id)init;
- (void).cxx_destruct;
- (BOOL)matchesItemIdentifying:(id)a0;

@end
