@class GEOStyleAttributes, NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource>

@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) unsigned int cartoID;
@property (readonly, nonatomic) unsigned int defaultTransitType;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKey:(unsigned int)a0 value:(unsigned int)a1;
- (id)initWithCartoId:(unsigned int)a0 defaultTransitType:(unsigned int)a1;

@end
