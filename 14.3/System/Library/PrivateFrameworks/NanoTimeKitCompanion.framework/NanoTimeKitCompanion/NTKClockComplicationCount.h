@class NSString;

@interface NTKClockComplicationCount : NSObject

@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) long long countOnFace;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplicationIdentifier:(id)a0 countOnFace:(long long)a1;

@end
