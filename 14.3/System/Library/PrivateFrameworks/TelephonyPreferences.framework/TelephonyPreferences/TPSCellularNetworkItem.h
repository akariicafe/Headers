@class NSString;

@interface TPSCellularNetworkItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *localizedName;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 localizedName:(id)a2;
- (BOOL)isEqualToCellularNetworkItem:(id)a0;

@end
