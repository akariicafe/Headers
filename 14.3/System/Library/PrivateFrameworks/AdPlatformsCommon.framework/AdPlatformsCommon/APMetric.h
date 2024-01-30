@class NSString, NSDictionary, NSDate;

@interface APMetric : NSObject <APMetricProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *os;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *osBuild;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *clientBundleIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *userIdentifier;
@property (retain, nonatomic) NSDictionary *properties;
@property (nonatomic) BOOL areNetworkDates;
@property (readonly, nonatomic) long long route;
@property (readonly, nonatomic) long long metric;
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *internalProperties;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) NSDictionary *serverDictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_options;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_properties;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)initUndefinedDeviceInfo;
- (void)initDeviceInfo;
- (BOOL)validateMetricAndSetupIdentifiers:(id)a0;
- (void)_replaceIdentifierWithIdentifier:(id)a0;
- (id)_serverDictionaryRepresentation;
- (id)_optionsArray;
- (id)_descriptionWithFormat:(id)a0;
- (id)initWithRoute:(long long)a0 metric:(long long)a1 contentIdentifier:(id)a2 contextIdentifier:(id)a3 identifier:(id)a4 properties:(id)a5 internalProperties:(id)a6 options:(long long)a7;
- (id)duplicateMetricReplacingIdentifier:(id)a0;

@end
