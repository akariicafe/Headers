@class NSArray;

@interface FigCaptureSessionParsedConfigurationRestrictions : NSObject

@property (readonly, nonatomic) BOOL allowAllConfigurations;
@property (readonly, nonatomic) NSArray *allowedConnectionMediaTypes;
@property (readonly, nonatomic) NSArray *allowedConnectionMetadataIdentifiers;

- (id)initWithAllowedAVMediaTypes:(id)a0 clientIsNonStandard:(BOOL)a1;
- (void)dealloc;
- (id)initWithClientAuditToken:(struct { unsigned int x0[8]; })a0;

@end
