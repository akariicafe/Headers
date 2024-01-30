@class NSString, NSDictionary, TPSDocument, NSError, TPSMonitoringEvents;

@interface TPSMiniTipMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long customizationID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) TPSDocument *content;
@property (copy, nonatomic) TPSMonitoringEvents *monitoringEvents;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
