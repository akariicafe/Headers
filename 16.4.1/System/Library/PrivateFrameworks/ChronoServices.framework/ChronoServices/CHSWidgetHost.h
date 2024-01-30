@class NSString, CHSChronoServicesConnection, CHSWidgetConfiguration;

@interface CHSWidgetHost : NSObject {
    CHSChronoServicesConnection *_connection;
    BOOL _invalid;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CHSWidgetConfiguration *configuration;

+ (id)new;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 connection:(id)a1;

@end
