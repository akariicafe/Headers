@class NSString;

@interface NTKClockComplicationCount : NSObject

@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) long long countOnFace;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithApplicationIdentifier:(id)a0 countOnFace:(long long)a1;

@end
