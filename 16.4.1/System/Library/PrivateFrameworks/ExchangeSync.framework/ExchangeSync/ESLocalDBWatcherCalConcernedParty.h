@class NSString;

@interface ESLocalDBWatcherCalConcernedParty : NSObject <NSCopying>

@property (readonly, weak, nonatomic) id concernedParty;
@property (readonly, nonatomic) NSString *accountID;

- (id)initWithConcernedParty:(id)a0 accountID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
