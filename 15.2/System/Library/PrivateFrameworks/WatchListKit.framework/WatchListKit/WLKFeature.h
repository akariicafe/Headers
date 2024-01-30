@class NSString;

@interface WLKFeature : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL enabled;

- (long long)compare:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (BOOL)isEqualToFeature:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
