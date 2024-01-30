@class DNDLifetimeDetails, NSString;

@interface _FCActivityLifetime : NSObject <FCActivityLifetimeDescribing>

@property (readonly, copy, nonatomic, getter=_dndLifetimeDetails) DNDLifetimeDetails *dndLifetimeDetails;
@property (readonly, copy, nonatomic) NSString *lifetimeIdentifier;
@property (readonly, copy, nonatomic) NSString *lifetimeName;
@property (readonly, copy, nonatomic) NSString *lifetimeMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLifetimeDetails:(id)a0;

@end
