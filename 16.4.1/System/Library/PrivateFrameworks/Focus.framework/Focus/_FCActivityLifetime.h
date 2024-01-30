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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLifetimeDetails:(id)a0;

@end
