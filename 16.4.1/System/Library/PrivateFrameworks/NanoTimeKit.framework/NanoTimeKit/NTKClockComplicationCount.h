@class NSString;

@interface NTKClockComplicationCount : NSObject

@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) long long countOnFace;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0 countOnFace:(long long)a1;

@end
