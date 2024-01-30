@class NSString;

@interface PGGraphMomentChange : PGGraphChange

@property (readonly, nonatomic) NSString *momentUUID;
@property (readonly, nonatomic) unsigned long long updateTypes;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithMomentUUID:(id)a0 updateTypes:(unsigned long long)a1;
- (void)mergeChange:(id)a0;

@end
