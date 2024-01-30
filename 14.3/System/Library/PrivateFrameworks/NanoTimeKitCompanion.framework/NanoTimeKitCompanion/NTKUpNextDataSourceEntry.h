@class NSSet, NSString;

@interface NTKUpNextDataSourceEntry : NSObject <NSCopying>

@property (retain, nonatomic) NSSet *identifiers;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) BOOL isDonation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithDataSourceIdentifiers:(id)a0 localizedName:(id)a1 isDonation:(BOOL)a2;

@end
