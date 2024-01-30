@class NSString, DNDClientEventSource;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) DNDClientEventSource *source;
@property (nonatomic) BOOL shouldAlwaysInterrupt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSource:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setShouldAlwaysInterrupt:(BOOL)a0;

@end
