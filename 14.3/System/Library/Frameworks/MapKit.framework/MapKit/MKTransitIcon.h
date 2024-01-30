@class NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource>

@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) unsigned int cartoID;
@property (readonly, nonatomic) unsigned int defaultTransitType;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCartoId:(unsigned int)a0 defaultTransitType:(unsigned int)a1;

@end
